#include<bits/stdc++.h>
using namespace std;

int solve(){
	int a,b,x,y,preq,pprod;
	cin>>a>>b>>x>>y;
	preq=a*b;
	pprod=x*y;
	if(preq<=pprod){
		return 1;
	}
	else{
		return 0;
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
		if(ans[i]){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}