#include <bits/stdc++.h>
using namespace std;
struct fraction{
	int up;
	int down;
	};
int main()
{
	fraction a,b,c;
	char ch;
	cout<<"Enter first fraction: ";cin>>a.up>>ch>>a.down;
	cout<<"Enter second fraction: ";cin>>b.up>>ch>>b.down;
	if(a.down!=b.down)
	{
		c.down=a.down*b.down;
		a.up*=b.down;
		b.up*=a.down;
		c.up=a.up+b.up;
		}
		else if(a.down==b.down)
		{
			c.up=a.up+b.up;
			c.up/=a.down;
			c.down=1;
		}
			
			if(c.down==1)
			{
				cout<<"Sum= "<<c.up;
				}
				else{
					cout<<"Sum= "<<c.up<<ch<<c.down;
					}
	}
