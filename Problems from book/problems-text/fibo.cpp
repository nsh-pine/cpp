#include<bits/stdc++.h>

int main()
{
	unsigned long a=0;unsigned long b=1;
	const unsigned long limit=4294967295;
	while(a < limit/2)
	{
		std::cout<<b<<" ";
		long c=a+b;
		a=b;
		b=c;
	}
}