#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int r,b;
	cin>>r>>b;
	int mi=min(r,b);
	cout<<mi<<" ";
	b-=mi;
	r-=mi;
	if(b>=2){
		cout<<b/2;
	}
	else if(r>=2){
		cout<<r/2;
	}
	else{
		cout<<"0";
	}
}