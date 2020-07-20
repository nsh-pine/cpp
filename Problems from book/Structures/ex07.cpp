#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
string a="Kim",b="Scott",c="Still";
char ch;
enum etype{laborer,secretary,manager,accountant,executive,researcher};
struct date{
	int d;
	int m;
	int y;
	};
struct employee{
	etype type;
	date entry;
	int id;
	float sal;
	};

employee store(string name)
{
	char ck;employee temp;
	cout<<'\n';
	cout<<name<<"'s id: ";cin>>temp.id;
	cout<<name<<"'s salary: ";cin>>temp.sal;
	cout<<name<<"'s first date of employment(dd/mm/yy): ";cin>>temp.entry.d>>ch>>temp.entry.m>>ch>>temp.entry.y;
	cout<<name<<"'s employee type(first letter only)\n   laborer, secretary, manager,\n   accountant, executive, researcher: ";ck=getche();
	switch(ck)
	{
		case 'l':temp.type=laborer;break;
		case 's':temp.type=secretary;break;
		case 'm':temp.type=manager;break;
		case 'a':temp.type=accountant;break;
		case 'e':temp.type=executive;break;
		case 'r':temp.type=researcher;break;
		}
		return temp;
	}
void show(string name2,employee p)
{
	string k;
	switch(p.type)
	{		
		case laborer:k="laborer";break;
		case secretary:k="secretary";break;
		case manager:k="manager";break;
		case accountant:k="accountant";break;
		case executive:k="executive";break;
		case researcher:k="researcher";break;
		}
	cout<<setw(6)<<name2<<setw(6)<<p.id<<setw(10)<<p.sal<<setw(6)<<p.entry.d<<'/'<<p.entry.m<<'/'<<p.entry.y<<setw(15)<<k<<'\n'<<endl;
	}
int main()
{
	employee kim,scott,still;
	kim=store(a);
	scott=store(b);
	still=store(c);
	cout<<"\n\n";
	cout<<setw(6)<<"NAME"<<setw(6)<<"ID"<<setw(10)<<"SALARY"<<setw(17)<<"DATE OF ENTRY"<<setw(9)<<"ROLE\n"<<endl;
	show(a,kim);show(b,scott);show(c,still);
	}
