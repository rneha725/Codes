#include <unistd.h> //for close()
#include <sys/socket.h> //for socket(), connect(), sendto(), recvfrom()
#include <arpa/inet.h> //sockaddr_in and inet_addr
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>

#define ECHOMAX 200

int main(int argc, char const *argv[])
{ 
	int sockfd=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
	if(sockfd==-1)
	{
		printf("Socket creation failed.");
		return 0;
	}
	else
	{
		printf("Socket created successfully.\n");
	}

	unsigned short serverPort=7;
	struct sockaddr_in serverAddress;
	struct sockaddr_in clientAddress;

	int resLength;

	memset(&serverAddress,0,sizeof(serverAddress));

	serverAddress.sin_family=AF_INET;
	serverAddress.sin_port=htons(serverPort);
	serverAddress.sin_addr.s_addr=htonl(INADDR_ANY);

	printf("Server address set.\n");

	int b=bind(sockfd,(struct sockaddr*)&serverAddress,sizeof(serverAddress));
	if(b<0)
	{
		printf("Binding Failed! Error code: %d",b);
		perror("Error!");
		return 0;
	}
	else
	{
		printf("Binding Successful.\n");
	}
	while(1)
	{
		char buffer[ECHOMAX];
		memset(buffer,0,ECHOMAX);
		printf("\nReady to receive...\n");
		recvfrom(sockfd, buffer, ECHOMAX, 0, (struct sockaddr*)&clientAddress, &resLength);
		
		printf("Handling: %s\n",inet_ntoa(clientAddress.sin_addr));
		printf("Message received: %s\n",buffer);
		
		int sentL=sendto(sockfd, buffer,ECHOMAX,0,(const struct sockaddr*)&clientAddress,sizeof(clientAddress));

		printf("Message sent: %s",buffer);
		
	}
	
	return 0;

}			