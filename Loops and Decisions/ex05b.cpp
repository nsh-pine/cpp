//infinity diamonds (not related or in the exercise but what the heck)
//ctrl + c to terminate

#include<bits/stdc++.h>

int main()
{
int ab=0;
	while(ab==0)
		{
	char a='X';
	int n=20;int ctrl=1;
	for(int i=0;i<20;i++)
	{
		if(ctrl==1)
		{
			std::cout<<std::setw(n)<<a;
		}
		else if(ctrl!=1)
		{
			std::cout<<std::setw(n);
			for(int k=0;k<ctrl;k++)
			{
				std::cout<<a;
			}
		}
		ctrl+=2;
		n--;
		std::cout<<std::endl;
	}
	n=1;ctrl=39;
	for(int i=0;i<20;i++)
	{
		if(ctrl==1)
		{
			std::cout<<std::setw(n)<<a;
		}
		else if(ctrl!=1)
		{
			std::cout<<std::setw(n);
			for(int k=0;k<ctrl;k++)
			{
				std::cout<<a;
			}
		}
		ctrl-=2;
		n++;
		std::cout<<std::endl;
	}
		}
}