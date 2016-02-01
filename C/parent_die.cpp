#include "iostream"
//22 Jan class
#include "unistd.h"

using namespace std;

int main(int argc, char const *argv[])
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		cout<<"Child slept. ParentID: "<<getppid()<<endl;
		sleep(1);
		cout<<"Child woke up. ParentID: "<<getppid()<<endl;
	}
	else
	{
		cout<<"I am parent. ID: "<<getpid()<<endl;
		cout<<"I am gonna die.\n";
	}
	return 0;
}

