#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,numbers;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='.'){
			numbers+='0';
		}
		else if(s[i]=='-'){
			if(s[i+1]=='.'){
				numbers+='1';
				i++;
			}
			else if(s[i+1]=='-'){
				numbers+='2';
				i++;
			}
		}
	}
	cout<<numbers;
}