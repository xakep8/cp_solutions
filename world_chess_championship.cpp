#include<bits/stdc++.h>
using namespace std;

int solve(){
	int x,c=0,n=0;
	string s;
	cin>>x>>s;
	x*=100;
	for(int i=0;i<14;i++){
		if(s[i]=='C'){
			c+=2;
		}
		else if(s[i]=='N'){
			n+=2;
		}
		else if(s[i]=='D'){
			c++;
			n++;
		}
	}
	if(c>n){
		return 0.6*x;
	}
	else if(c<n){
		return 0.4*x;
	}
	else{
		return 0.55*x;
	}

}

int main(){
	int t;
	cin>>t;
	int ans[t];
	for(int i=0;i<t;i++){
		ans[i]=solve();
	}
	for(int i=0;i<t;i++){
		cout<<ans[i]<<endl;
	}
}