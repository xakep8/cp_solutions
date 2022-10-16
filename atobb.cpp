#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='A'){
			s.erase(i,1);
			s.insert(i-1,"B");
			s.insert(i-1,"B");
			i--;
		}
		else if(s[i]=='B'&&s[i+1]=='B'){
			s.erase(i-1,2);
			s.insert(i-1,"A");
		}
	}
	cout<<s;
}