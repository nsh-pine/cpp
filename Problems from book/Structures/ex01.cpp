#include<bits/stdc++.h>
using namespace std;

struct phone{
	int areacode;
	int exchange;
	int number;
	};
	
int main()
{
	phone me,you;
	me={212,767,8900};
	cout<<"Enter your area code, exchange, and number: ";cin>>you.areacode>>you.exchange>>you.number;
	cout<<"My number is ("<<me.areacode<<") "<<me.exchange<<'-'<<me.number<<endl;
	cout<<"Your number is ("<<you.areacode<<") "<<you.exchange<<'-'<<you.number<<endl;
	
	
	}
