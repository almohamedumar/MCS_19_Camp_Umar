#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,j=0,l;
    cin>>n;k=n,l=n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    while(n>=2)
    {
        cout<<a[k-1];
        k--;
        cout<<a[j];
        j++;
        n-=2;
    }
    if(n%2!=0)
    {
        l/=2;
        cout<<a[l];
    }
}
