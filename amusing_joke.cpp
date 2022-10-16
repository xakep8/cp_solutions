#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int a[26]={0},b[26]={0};
	for(int i=0;i<s1.length();i++){
		int n=s1[i]-'A';
		a[n]++;
	}
	for(int i=0;i<s2.length();i++){
		int n=s2[i]-'A';
		a[n]++;
	}
	for(int i=0;i<s3.length();i++){
		int n=s3[i]-'A';
		b[n]++;
	}
	for(int i=0;i<26;i++){
		if(a[i]!=b[i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}