#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int temp,count=0;//temperature
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp<0) ++count;
	}
	cout<<count;
}
