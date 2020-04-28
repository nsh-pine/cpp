#include <bits/stdc++.h>
	
int main()
{	
	int n;
	for(n=1;n<=10;n++)
	{
		std::cout<<std::setw(4)<<n;
		int cube=n*n*n;
		std::cout<<std::setw(6)<<cube<<std::endl;
	}
	
	
	
	int num=1;
	int four=1;
	while(four<10000)
	{
		std::cout<<std::setw(4)<<num;
		std::cout<<std::setw(5)<<four<<std::endl;
		num++;
		four=num*num*num*num;
		
	}
}