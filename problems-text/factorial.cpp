#include <iostream>

int main()
{
	int num;
	std::cout<<"Enter : ";std::cin>>num;
	for(int i=num-1;i>0;i--)
	{
		num*=i;		//num=num*i;
	}
	std::cout<<"Factorial : "<<num<<std::endl;
}