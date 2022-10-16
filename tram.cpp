#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,pass=0,gre=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++){
		pass-=a[i];
		pass+=b[i];
		gre=max(gre,pass);
	}
	cout<<gre;
}