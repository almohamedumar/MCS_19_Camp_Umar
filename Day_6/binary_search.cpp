#include<iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n],k,low=0,high=n-1,mid=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]<k)
		{
			low=mid+1;
		}
		else if(a[mid]>k)
		{
			high=mid-1;	
		}
		else
		{
			cout<<a[mid];
		}
	}
}
