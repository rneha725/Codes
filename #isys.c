#include <stdio.h>
#include <syscall.h>

int main(int n, char **m)
{	
	switch(*m[1]-'0')
	{
		case 1:system("gedit"); break;
		case 2:system("vim"); break;
		case 3:system("$USER"); break;
		default: printf("Go get some cheese!");
	}
	return 0;
}
