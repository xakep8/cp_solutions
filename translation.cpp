#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	cin>>s>>t;
	int n=s.length(),count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==t[n-1-i]){
			count++;
		}
	}
	if(count==n){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}