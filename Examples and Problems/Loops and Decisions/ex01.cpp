//multiplication table basically 

#include <bits/stdc++.h>
#include <conio.h>

int main()
{
int num;
	std::cout<<"Enter a number: ";
	std::cin>>num;
	std::cout<<std::setw(6);
	for(int j=1;j<=200;j++)
	{
		std::cout<<j*num;
		if(j%10==0)
		{
			std::cout<<'\n';
			std::cout<<std::setw(6);
		}else
		{
			std::cout<<std::setw(5);
		}
	}		
}