#include <bits/stdc++.h>
#include <process.h>
int main()
{
	unsigned long n,j;
	while(n!=1 && n!=0)
	{
		bool flag=true;
	std::cout<<"Enter : ";std::cin>>n;
	if(n==1 || n==0){exit(0);}		//exit on 1 or 0
	for(j=2;j<=n/2;j++)
	{
		if(n%j==0)
		{
			std::cout<<n<<" is not prime"<<std::endl;
			std::cout<<"It's divisible by "<<j<<std::endl;
			flag=false;
			break;

		}
	}
	if(flag==true)
	{std::cout<<n<<" is prime"<<std::endl;}
	}	
}