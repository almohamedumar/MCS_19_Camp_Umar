#include<iostream>
using namespace std;
unsigned long int catalan(int n)
{
	if(n<=1){ return 1;}
	unsigned long int i=0;
	for(int j=0;j<n;j++)
	{
		i+=catalan(j)*catalan(n-j-1);
	}
	return i;
}
int main()
{
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<catalan(i)<<" ";
	}
}
