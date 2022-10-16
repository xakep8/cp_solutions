#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
int upp=0,low=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(isupper(s[i])){
			upp++;
		}
		else{
			low++;
		}
	}
	if(low<upp){
		transform(s.begin(),s.end(),s.begin(),::toupper);
	}
	else{
		transform(s.begin(),s.end(),s.begin(),::tolower);
	}
	cout<<s;
}