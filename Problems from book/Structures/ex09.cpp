#include <bits/stdc++.h>
using namespace std;

struct Time
{  
	int hours;
	int minutes;
	int seconds;
	};
	
int main()
{
	Time tone;
	char ch;
	cout<<"Enter time(hh:mm:ss): ";cin>>tone.hours>>ch>>tone.minutes>>ch>>tone.seconds;
	long totalsecs=tone.hours*3600+tone.minutes*60+tone.seconds;
	cout<<"It's "<<totalsecs<<" seconds";
	}
