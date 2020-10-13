//characters 1 2 3 4 5 6 into integer 123456

#include<bits/stdc++.h>
#include<conio.h>

int main()
{
char ch;long num,num_b=0;
	long out=0;
	int count=0;
	std::cout<<"Enter a number: ";
	while(ch!='\r' && count<6)
	{
		ch=getche();
		num=ch-48;
		out=out+num;
		if(count!=5)
		{
			out=out*10;
		}	
		count++;
	}
	std::cout<<"\nNumber is: "<<out;
}