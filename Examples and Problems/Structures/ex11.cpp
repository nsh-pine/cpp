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
	Time tone,two,finaltime;
	char ch;
	cout<<"Enter first time(hh:mm:ss): ";cin>>tone.hours>>ch>>tone.minutes>>ch>>tone.seconds;
	cout<<"Enter second time(hh:mm:ss): ";cin>>two.hours>>ch>>two.minutes>>ch>>two.seconds;
	float totalone=tone.hours*3600+tone.minutes*60+tone.seconds;
	float totaltwo=two.hours*3600+two.minutes*60+two.seconds;
	float finaltotal=totalone+totaltwo;
	float hr=finaltotal/3600;
	finaltime.hours=hr;
	float min=(hr-finaltime.hours)*60;
	finaltime.minutes=min;
	float sec=(min-finaltime.minutes)*60;
	finaltime.seconds=sec;
	cout<<"Final time: "<<finaltime.hours<<ch<<finaltime.minutes<<ch<<finaltime.seconds;
	}
