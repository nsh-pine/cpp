//pyramid (was troublesome)

#include <bits/stdc++.h>

int main()
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
}