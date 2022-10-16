#include<bits/stdc++.h>
using namespace std;

int main(){
	string n1,n2,ans;
	cin>>n1>>n2;
	for(int i=0;i<n1.length();i++){
		if((n1[i]=='0'&&n2[i]=='1')||(n1[i]=='1'&&n2[i]=='0')){
			ans+='1';
		}
		else if((n1[i]=='1'&&n2[i]=='1')||n1[i]=='0'&&n2[i]=='0'){
			ans+='0';
		}
	}
	cout<<ans;
}