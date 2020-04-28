//interest and total amount over unknown years(finding total amount)

#include<bits/stdc++.h>

int main()
{
	int years;
	float initial;
	long double rate,result,plu;
	std::cout<<"Enter initial amount: ";std::cin>>initial;
	std::cout<<"Enter number of years: ";std::cin>>years;
	std::cout<<"Enter interest rate (percent per year): ";std::cin>>rate;
	for(int k=0;k<years;k++)
	{
	plu=initial*(rate/100);
	initial+=plu;
	}
	result=initial;
	std::cout<<"At the end of "<<years<<" years you will have "<<result<<" dollars.";
}