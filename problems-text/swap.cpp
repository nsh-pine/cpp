//bitxorswap
#include <bits/stdc++.h>

void swap(int& a,int& b)		//xor swap function
{
	if(&a!=&b)
	{
	a^=b;
	b^=a;
	a^=b;
	}
}

int main()
{
	int a=5,b=9;
	int c=a^b;
	std::cout<<c<<std::endl;
	swap(a,b);
	std::cout<<a<<':'<<b;
}