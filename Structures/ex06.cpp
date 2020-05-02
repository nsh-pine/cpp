#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

enum etype{laborer,secretary,manager,accountant,executive,researcher};

int main()
{
	etype show;
	cout<<"Enter employee tpye (first letter only)\n   laborer, secretary, manager, \n   accountant, executive, researcher: ";
	char ch;
	string k;
	ch=getche();
	switch(ch)
	{
		case 'l':show=laborer;break;
		case 's':show=secretary;break;
		case 'm':show=manager;break;
		case 'a':show=accountant;break;
		case 'e':show=executive;break;
		case 'r':show=researcher;break;
		}
		switch(show)
		{
			case laborer:k="laborer";break;
			case secretary:k="secretary";break;
			case manager:k="manager";break;
			case accountant:k="accountant";break;
			case executive:k="executive";break;
			case researcher:k="researcher";break;
			}
		cout<<"\nEmployee type is "<<k<<'.';
	}
