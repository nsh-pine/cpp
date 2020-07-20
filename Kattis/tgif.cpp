//half of the part written by fri, I edited the other half
#include<bits/stdc++.h>
using namespace std;

int n,i,j,aaa,totday=0;
string month,day,ans;

string montharr[12]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
int noday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
string dayarr[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
int main()
{
    cin>>n>>ws>>month;
    cin>>day;
    for( i=0;i<12;i++)
    {
        if (month==montharr[i])
        break;
    }
    for(int g=0;g<i;g++)
    {
        totday+=noday[g];
    }
    totday+=n;
    int totday2=0;
    if(i>1)
    totday2=totday+1;	//case for feb29th(leap year)
	int start,st2;
	for(j=0;j<7;j++)
	{
		if(day==dayarr[j])
		{
			start=j;
			st2=j;	//start copy
			break;
			}
		}
		string ansday;
	for(int ctl=0;ctl<totday;ctl++)
	{
		ansday=dayarr[start];		//days rotation
		if(start>6)
		{
			start=0;
			}
			start++;
	}
	string leap;		//day(case for feb29th or leap year)
	if(totday2!=0){								//days rotation for leap year
	for(int ctl=0;ctl<totday2;ctl++)
	{
		leap=dayarr[st2];
		if(st2>6)
		{
			st2=0;
			}
			st2++;
	}
}else leap="NO";
	if(ansday!="FRI" && leap!="FRI")cout<<":(";
	else if(ansday=="FRI" && leap=="NO") cout<<"TGIF";
	else if(ansday!=leap && leap!="NO") cout<<"not sure";
}
