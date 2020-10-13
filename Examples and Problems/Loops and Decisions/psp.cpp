#include <bits/stdc++.h>

char ck=156;
char cp='.';

float oldtonew(float pa,float s,float pb)
{
	pb=pb/12;
	s+=pb;
	s=s/20;
	pa+=s;
	return pa;
}

void newtoold(float dp)
{
	int paa;float decfrac;
	paa=static_cast<int>(dp);	//remove decimal fraction
	decfrac=dp-paa;				//regain decimal fraction
	decfrac*=20;
	std::cout<<"Equivalent in old notation = "<<ck<<paa<<cp<<decfrac;
}

int main()
{
	int n,pound,shi,pence;
	float deci;
	std::cout<<"1 for old system to new system\n2 for new system to old system\nEnter : ";std::cin>>n;
	switch(n)
	{
		case 1:
		std::cout<<"Enter pounds: ";std::cin>>pound;
		std::cout<<"Enter shillings: ";std::cin>>shi;
		std::cout<<"Enter pence: ";std::cin>>pence;
		deci=oldtonew(pound,shi,pence);
		std::cout<<"Decimal pounds = "<<ck<<std::setprecision(3)<<deci;
		break;
		
		case 2:
		std::cout<<"Enter decimal pounds: ";std::cin>>deci;
		newtoold(deci);
		break;
		
	}
}