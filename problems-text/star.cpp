#include <bits/stdc++.h>

void star()
{
	int n;
	std::cout<<"Lines : ";
	std::cin>>n;
	int a=1;
	int b;
	b=a;
	while(a<=n)
	{
		a--;
		std::cout<<"* ";
		if(a!=0)
			continue;
		std::cout<<'\n'<<std::endl;
		b++;
		a=b;
	}
}

int main()
{
	star();
}