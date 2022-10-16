#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,count=0;
	cin>>t;
	int n[t],k[t];
	string s[t];
	for(int i=0;i<t;i++){
		cin>>n[i]>>k[i]>>s[i];
	}
	for(int i=0;i<t;i++){
		count=0;
		for(int j=0;j<n[i];j++){
			if(s[i][j]==s[i][n[i]-j-1]){
				continue;
			}
			else{
				s[i][j]=s[i][n[i]-j-1];
				count++;
			}
		}
		if(count==k[i]){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
}