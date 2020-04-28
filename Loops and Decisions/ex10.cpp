//interest and total amount over unknown years(finding time that is "years")

#include<bits/stdc++.h>

int main()
{
	int years=0;
	float initial,rate,plu,finall;
	std::cout<<"Enter initial amount: ";std::cin>>initial;
	std::cout<<"Enter final amount: ";std::cin>>finall;
	std::cout<<"Enter interest rate (percent per year): ";std::cin>>rate;
	while(initial<=finall)
	{
	plu=initial*(rate/100);
	initial+=plu;
	years++;
	}
	std::cout<<"It will take "<<years<<" years to reach "<<initial<<" dollars.";
}