#include<iostream>
using namespace std;
void cal(int a,int b,char op);
int main()
{
	int x,y;
	char c;
	cout<<"enter first number,operater,second number";
	cin>>x>>c>>y;
	cal(x,y,c);
	return 0;}
	void cal(int a,int b,char op)
	{
		switch(op)
		{
			case'+':
			cout<<a<<"+"<<b<<"="<<a+b;
			break;
			case'-':
			cout<<a<<"-"<<b<<"="<<a-b;
			break;
			case'*':
			cout<<a<<"*"<<b<<"="<<a*b;
			break;
			case'/':
	cout<<a<<"/"<<b<<"="<<a/b;
	break;
	case'%':
	cout<<a<<"%"<<b<<"="<<a%b;
	break;
	default:
	cout<<"invalid operator";
			}
		}


