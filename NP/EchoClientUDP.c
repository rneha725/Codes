#include <unistd.h> //for close()
#include <sys/socket.h> //for socket(), connect(), sendto(), recvfrom()
#include <arpa/inet.h> //sockaddr_in and inet_addr
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ECHOMAX 200

int main(int argc, char const *argv[])
{
	//socket creation
	int sockfd=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	
	if(sockfd==-1)
	{
		printf("Socket creation failed.");
		return 0;
	}
	else
	{
		printf("Socket created successfully.\n");
	}

	//variable declaration
	struct sockaddr_in serverAddress;
	struct sockaddr_in fromAddress;
	
	char *serverIP;
	unsigned short serverPort;

	char msg[ECHOMAX],buffer[ECHOMAX];;
	int msgLength;
	unsigned int resLength;

	//variable initialization
	serverIP="127.0.0.1";
	serverPort=7;
	memset(buffer,0,ECHOMAX);
	memset(msg,0,ECHOMAX);
	memset(&serverAddress,0,sizeof(struct sockaddr_in));
	
	serverAddress.sin_family=AF_INET;
	serverAddress.sin_port=htons(serverPort);
	serverAddress.sin_addr.s_addr=inet_addr(serverIP);

	printf("Enter String: ");
	scanf("%s",msg);

	msgLength=strlen(msg);
	printf("Message length: %d\n",msgLength);
	msg[msgLength]='\0';

	

	printf("Server address set.\n");

	sendto(sockfd,msg,msgLength,0,(const struct sockaddr*)&serverAddress,sizeof(serverAddress));

	printf("Packet sent.\n");
	
	// recvfrom(sockfd,buffer,ECHOMAX,0,(struct sockaddr*)&fromAddress,&resLength);
	recvfrom(sockfd,buffer,ECHOMAX,0,NULL,&resLength);

	printf("Packet received: %s\n",buffer);
	buffer[msgLength]='\0';
	
	close(sockfd);
	printf("Socket closed.\n");
	exit(0);
	return 0;
}

