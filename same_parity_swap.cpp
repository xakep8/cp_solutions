#include<bits/stdc++.h>
using namespace std;

void swaping(){
	int n,oneo=0,zeo=0,onee=0,zee=0,ze=0,one=0;
	cin>>n;
	string s;
	cin>>s;
	int h=s.length();
	for(int i=0;i<h;i++){
		if(s[i]=='1'&&(i%2==0)){
			onee++;
			one++;
		}
		else if(s[i]=='0'&&(i%2==1)){
			zee++;
			ze++;
		}
		if(s[i]=='1'&&(i%2==1)){
			oneo++;
			onee++;
		}
		else if(s[i]=='0'&&(i%2==0)){
			zeo++;
			zee++;
		}
	}
	int ans=0;
	if(h&1){
		h--;
	}
	int m=1,x=1;
	for(int i=0;i<=h-2;i+=2){
		if(s[i]=='0'&&s[i+1]=='1'){
		}
		else{
			m=0;
		}
		if(s[i]=='1'&&s[i+1]=='0'){
		}
		else{
			x=0;
		}
	}
	if(m){
		cout<<h/2<<"\n";
		return;
	}
	else if(x){
		if(s[h]=='1'){
			cout<<h/2<<"\n";
			return;
		}
	}
	if(onee==zee){
		ans=onee-1;
	}
	else if(onee<zee){
		ans=onee;
	}
	else if(onee>zee){
		ans=zee;
	}
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		swaping();
	}
}