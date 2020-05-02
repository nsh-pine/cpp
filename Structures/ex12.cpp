#include <bits/stdc++.h>
#include <conio.h>
#include <process.h>
using namespace std;
struct fraction{
	int up;
	int down;
	};
int main()
{
	fraction one,two,three;
	char ch,ck,k;
	do{
	cout<<"\nEnter first fraction, function, second fraction : ";
	cin>>one.up>>ch>>one.down>>ck>>two.up>>ch>>two.down;
	switch(ck)
	{
		case '+':
		if(one.down!=two.down){
		three.up=one.up*two.down+two.up*one.down;
		three.down=two.down*one.down;}
		else if(one.down==two.down)
		{
			three.up=one.up+two.up;
			three.down=one.down;
			}
		break;
		case '-':
		if(one.down!=two.down){
		three.up=one.up*two.down-two.up*one.down;
		three.down=two.down*one.down;}
		else if(one.down==two.down){
			three.up=one.up-two.up;
			three.down=one.down;
			}
		break;
		case '*':
		three.up=one.up*two.up;
		three.down=one.down*two.down;
		break;
		case '/':
		three.up=one.up*two.down;
		three.down=one.down*two.up;
		break;
		default : 
		cout<<"Wrong function, only(+,-,/,*)";
		exit(0);
	}
	if(three.up%three.down==0)
	{
			cout<<"Answer: "<<three.up/three.down;
	}
	else
	{
	for(int n=2;n<100;n++)
	{
		if(three.up%n==0 && three.down%n==0)
		{
			
				three.up/=n;
				three.down/=n;
		}
	}
	cout<<"Answer: "<<three.up<<'/'<<three.down;
}
	cout<<"\nDo you want to continue(y/n)?: ";k=getche();
}while(k!='n');
}
