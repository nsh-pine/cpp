//fahrenheit to celsius and vice versa

#include <bits/stdc++.h>
#include <conio.h>

int main()
{
float fah,cels,output;
	int n;
	std::cout<<"Type 1 to convert Fahrenheit to Celsius,\n";
	std::cout<<std::setw(41)<<"2 to convert Celsius to Fahrenheit: ";	//fucked at here
	std::cin>>n;
	switch(n)
	{
		case 1:
		std::cout<<"Enter temperature in Fahrenheit: ";
		std::cin>>fah;
		output=(fah-32)*5/9;
		std::cout<<"In Celsius that's "<<output<<std::endl;
		break;
		case 2:
		std::cout<<"Enter temperature in Celsius: ";
		std::cin>>cels;
		output=(cels*9/5)+32;
		std::cout<<"In Fahrenheit that's "<<output<<std::endl;
		break;
	}
}