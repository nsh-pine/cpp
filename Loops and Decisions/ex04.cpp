// basic calculator(addition,subtraction,multiplication,division)

#include <bits/stdc++.h>
#include <conio.h>

void word()	//ex4
{
	std::cout<<"Answer = ";
}

int main()
{
long double a,b;
	char ch,ch_b;
	do
	{
		std::cout<<"\nEnter first number, operator, second number: ";
		std::cin>>a>>ch>>b;
		switch(ch)
		{
			case '+':
			word();std::cout<<a+b;
			break;
			
			case '-':
			word();std::cout<<a-b;
			break;
			
			case 'x':
			word();std::cout<<a*b;
			break;
			
			case '*':
			word();std::cout<<a*b;
			break;
			
			case '/':
			word();std::cout<<a/b;
			break;
		}
		std::cout<<"\nDo another (y/n)? ";ch_b=getche();
	}while(ch_b!='n');
}