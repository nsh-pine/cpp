#include <bits/stdc++.h>
#include <conio.h>

char ck=156;
char cg='.';

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
	std::cout<<"Answer = "<<ck<<paa<<cg<<std::setprecision(2)<<decfrac;
}

void newtoold2(float dp)
{
	int paa;float decfrac;
	paa=static_cast<int>(dp);	//remove decimal fraction
	decfrac=dp-paa;				//regain decimal fraction
	decfrac*=20;
	std::cout<<"Answer = -"<<ck<<paa<<cg<<std::setprecision(2)<<decfrac;
}

int main()
{
	int poundA,shiA,penceA,poundB,shiB,penceB;
	float deciA,deciB,deciF;
	char ch,cp,chB;
	bool flag;
	do
	{
		flag=false;
	std::cout<<"\nEnter first amount, operator, second amount: ";
	std::cin>>poundA>>cp>>shiA>>cp>>penceA>>ch>>poundB>>cp>>shiB>>cp>>penceB;
	deciA=oldtonew(poundA,shiA,penceA);
	deciB=oldtonew(poundB,shiB,penceB);
	switch(ch)
	{
		case '+':
		deciF=deciA+deciB;
		break;
		
		case '-':
		if(deciB>deciA)
		{
			deciF=deciB-deciA;
			flag=true;
		}
		else
		{
		deciF=deciA-deciB;
		}
		break;
		
		case '*':
		deciF=deciA*deciB;
		break;
		
		case 'x':
		deciF=deciA*deciB;
		break;
	}
	if(flag==false)
	{
		newtoold(deciF);
	}
	else if(flag==true)
	{
		newtoold2(deciF);
	}
	
	std::cout<<"\nAgain? (y/n) : ";
	chB=getche();
	}while(chB!='n');
	
}