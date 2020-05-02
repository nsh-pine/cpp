#include <bits/stdc++.h>
using namespace std;
struct sterling
{
	int pounds;
	int shillings;
	int pence;
	};
	
int main()
{
	sterling shel;
	char ch='.';
	double decip;
	cout<<"Enter amounts(decimal): ";
	cin>>decip;
	shel.pounds=decip;
	float ster=(decip-shel.pounds)*20;
	shel.shillings=ster;
	float pen=(ster-shel.shillings)*12;
	shel.pence=pen;
	cout<<"Your amount in old British system: "<<shel.pounds<<ch<<shel.shillings<<ch<<shel.pence;
	}
