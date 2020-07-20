#include <bits/stdc++.h>
using namespace std;

string a="Jack",b="Emmi",c="Kazy";

struct Employee{
	int number;
	float salary; //in dollars
	};

Employee numsal(string k)
{
	Employee temp;
		cout<<k<<"'s id: ";cin>>temp.number;
	cout<<k<<"'s salary: ";cin>>temp.salary;
	return temp;
	}

void show(string b,int id,float wage)
{
	cout<<setw(6)<<b<<setw(6)<<id<<setw(6)<<wage<<'\n'<<endl;
	}
	
int main()
{
	Employee jack,emmi,kazy;
	jack=numsal(a);
	emmi=numsal(b);
	kazy=numsal(c);
	
	cout<<setw(6)<<"name"<<setw(6)<<"id"<<setw(10)<<"salary\n"<<endl;
	show(a,jack.number,jack.salary);
	show(b,emmi.number,emmi.salary);
	show(c,kazy.number,kazy.salary);
	
};
