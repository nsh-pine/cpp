#include <bits/stdc++.h>
using namespace std;
struct point {
	int x;
	int y;
	}
	;
int main()
{
	point a,b,c;
	cout<<"Enter coordinates for p1: ";cin>>a.x>>a.y;
	cout<<"Enter coordinates for p2: ";cin>>b.x>>b.y;
	c.x=a.x+b.x;
	c.y=a.y+b.y;
	cout<<"Coordinates of p1+p2 are: "<<c.x<<", "<<c.y;
	}
