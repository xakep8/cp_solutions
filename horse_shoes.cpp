#include<bits/stdc++.h>
using namespace std;

int solve(){
	int temp,count=0;
	vector<int> v;
	for(int i=0;i<4;i++){
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<4;i++){
		if(v[i]==v[i+1]){
			count++;
		}
	}
	cout<<count;
}

int main(){
	solve();
}