#include<bits/stdc++.h>
using namespace std;

int solve(int n){
	float frac=0,totalf;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		frac+=(a[i]);
	}
	totalf=(frac/n);
	cout<<totalf;
}

int main(){
	int n;
	cin>>n;
	solve(n);
}