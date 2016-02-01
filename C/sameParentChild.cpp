#include "unistd.h"
#include <iostream>
#include "cstdlib"

using namespace std;

int stoi(string str)
{
	int res=0;
	for(int i=0;i<str.length();i++)
	{
		res=res*10;
		res=res+str[i]-'0';
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int n=stoi(argv[1]);
	cout<<n;
	pid_t pid=fork();
	while(n--)
	cout<<"PID: "<<getpid()<<endl;
	return 0;
}

