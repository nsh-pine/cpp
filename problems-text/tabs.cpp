#include <bits/stdc++.h>

void tabs()
{
		for(int i=0;i<80;i++)
	{
		char ch=(i%8)? ' ' : 'x';
		std::cout<<ch;
	}
	
}

int main()
{
	tabs();
}