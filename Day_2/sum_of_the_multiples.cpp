#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,tot=0,total=0,j=0;
    for(i=3,j=5;i<1000;i+=3,j+=5)
    {
        sum+=i;
        if(j<1001)
        {
        tot+=j;
        }
    }
    total=sum+tot;
    cout<<total;
}
