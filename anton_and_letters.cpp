#include<bits/stdc++.h>
using namespace std;

void unique(string s,int n){
	sort(s.begin(),s.end());
	s.erase(unique(s.begin(),s.end()),s.end());
	cout<<s.length();
}

int main(){
	string s,temp;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			temp+=s[i];
		}
	}
	int n=temp.length();
	unique(temp,n);
}