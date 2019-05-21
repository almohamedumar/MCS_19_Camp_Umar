#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void showlist(list<int> l)
{
	list <int> :: iterator i;
	for(i=l.begin();i!=l.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<"\n";
}
int main()
{
	list<int> list1,list2;
	for(int i=0;i<5;i++)
	{
		list1.push_back(i*2);
		list2.push_front(i*i);
	}
	showlist(list1);
	showlist(list2);
	list1.reverse();
	list2.sort();
	showlist(list1);
	showlist(list2);
}
