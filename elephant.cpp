#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	int r=n,x=n,step=0;
	if(r/5){
		x=r/5;
		r%=5;
		step+=x;
	}
	if(r/4){
		x=r/4;
		r%=4;
		step+=x;
	}
	if(r/3){
		x=r/3;
		r%=3;
		step+=x;
	}
	if(r/2){
		x=r/2;
		r%=2;
		step+=x;
	}
	if(r/1){
		x=r/1;
		r%=1;
		step+=x;
	}
	cout<<step;
}

int main(){
	int n;
	cin>>n;
	solve(n);
}