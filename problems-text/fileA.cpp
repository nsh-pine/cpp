#include <bits/stdc++.h>
#include <conio.h>

void bitxorswap(int& a,int& b)		//xor swap function
{
	if(&a!=&b){
	a^=b;
	b^=a;
	a^=b;
	}
}

int main()
{
	//analyzing conditional operator
	/*
	for(int i=0;i<80;i++)
	{
		
		char ch=(i%8) ? 'y' : 'n';
		std::cout<<ch<<':'<<8+i<<'\t';
	}
	*/
	
	//bitwise xor operator study
	/*
	int a=5,b=9;
	int c=a^b;
	std::cout<<c<<std::endl;
	bitxorswap(a,b);
	std::cout<<a<<':'<<b;
	*/
	/*
	const unsigned char WHITE=219;
	const unsigned char GRAY=176;
	unsigned char ch;
	for(int cunt=0;cunt<80*25-1;cunt++)
	{
		ch=WHITE;
		for(int j=2;j<cunt;j++)
		{
			if(cunt%j==0)
			{
				ch=GRAY;
				break;
			}
		}
		std::cout<<ch;
	}
	getch();
	*/
	
	//testing whether a variable defined within a block {} is visible outside the block
	//it isn't visible
	/*
	{int k;
	k*k^k;
	const unsigned char b=177,c=176,d=179;
	std::cout<<b<<c<<d;
	}
	//std::cout<<k;
	*/
	
	
	/*
	int j=100;
	while(j<=110)
	{std::cout<<j++<<std::endl;			//equals to std::cout<<j<<std::endl;j++;
	}
	*/
	//getche();	
}