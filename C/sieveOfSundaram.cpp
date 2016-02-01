#include "iostream"
#include "cmath"

using namespace std;

void sieveOfSundaram(int n)
{
	if(n>2) cout<<"2\n";
	n=ceil(n-2)/2;
	int numbers[n+1]={0};
	for(int i=1;i<n+1;i++)
	{
		for(int j=i;(i + j + 2*i*j) <= n;j++)
		{	
			numbers[i+j+2*i*j]=-1;
		}
	}
	for(int i=1;i<n+1;i++)
	{
		if(numbers[i]==0) cout<<2*i+1<<endl;
	}
	return;
}


int main()
{
	int n;
	cin>>n;
	sieveOfSundaram(n);
	return 0;
}
