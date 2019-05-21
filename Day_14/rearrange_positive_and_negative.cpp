#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,pos=0,neg=0;
    cin>>n;
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
	if(a[i]>0)
	{
		b[pos]=a[i];
		pos++;
	}
	else
	{
		c[neg]=a[i];
		neg++;
	}
    }
    sort(b,b+pos);sort(c,c+neg);
	while(n>=1)
    {
	if(neg>0)
	{
        cout<<c[neg-1];
        neg--;
		n--;
	}
	if(pos>0)
	{ 
        cout<<b[pos-1];
        pos++;
		n--;
	}
    }
}


