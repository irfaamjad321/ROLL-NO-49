#include<iostream>
using namespace std;
void swap(int&x ,int&y);
int main()
{
	int a,b;
	cout<<"enter a integer";
	cin>>a;
	cout<<"enter an integer";
	cin>>b;
	cout<<"values before swapping \n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"swapping the values"<<endl;
	swap(a,b);
	cout<<"values after swapping \n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}
void swap(int&x,int&y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
