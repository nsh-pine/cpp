#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int t;
		cin>>t;
		vector<string>arr;
		string str;
		for(;t-->0;){
		cin>>str;
		arr.push_back(str);
		}
		sort(arr.begin(),arr.end());
		arr.erase(unique(arr.begin(),arr.end()),arr.end());
		int count=0;
		for(auto k:arr) if(k!="") count++;
		cout<<count<<endl;
		arr.clear();
	}
}
