#include <unistd.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		cout<<"child process";
		return execl("/bin/ls","ls","-r","-t","-l");
	}
	else 
	{
	}

	return 0;
}