#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a[26]={0},count=0;
	cin>>n;
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	for(int i=0;i<n;i++){
		int k= s[i]-'a';
		a[k]++;
	}
	for(int i=0;i<26;i++){
		if(a[i]){
			count++;
		}
	}
	if(count==26){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}