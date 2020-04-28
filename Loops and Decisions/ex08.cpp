// pound.shilling.penny addition

#include<bits/stdc++.h>
#include<conio.h>

int main()
{
long a,b,c,d,e,f,r_a,r_b,r_c;
	char ch,ctrl;
	char ck=156;
	do
	{
	std::cout<<"Enter first amount: "<<ck;
	std::cin>>a>>ch>>b>>ch>>c;
	std::cout<<"Enter second amount: "<<ck;
	std::cin>>d>>ch>>e>>ch>>f;
	r_c=c+f;
	r_b=b+e;
	r_a=a+d;
	if(r_c>11)
	{
		r_b++;
		r_c=0;
	}
	if(r_b>19)
	{
		r_a++;
		r_b=0;
	}
	std::cout<<"Total is "<<ck<<r_a<<ch<<r_b<<ch<<r_c<<std::endl;
	std::cin.ignore();
	std::cout<<"Do you wish to continue (y/n)?";
	ctrl=getche();
	std::cout<<std::endl;
	}while(ctrl!='n'&&ctrl=='y');
}