#include<iostream>
using namespace std;
void factorial(int n);
int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	factorial(num);
	return 0;
}
void factorial(int n)
{
	int i;
	long fact;
	fact=1;
	for(i=1;i<=n;i++)
	fact*=i;
	cout<<"factorial of"<<n<<"is"<<fact;
}
