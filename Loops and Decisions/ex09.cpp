//guests and chairs possible arrangements(probability first introduced,first year)

#include<bits/stdc++.h>

int main()
{
long guests,chairs,arrang=1;
	std::cout<<"Guests : ";std::cin>>guests;
	std::cout<<"Chairs : ";std::cin>>chairs;
	for(int i=0;i<chairs;i++)
	{
		arrang*=guests;
		guests--;
	}
	std::cout<<"Possible seat arrangements : "<<arrang<<std::endl;
}