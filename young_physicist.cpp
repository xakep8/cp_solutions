#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,netx=0,nety=0,netz=0;
	cin>>n;
	int x[n],y[n],z[n];
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i]>>z[i];
	}
	for(int i=0;i<n;i++){
		netx+=x[i];
		nety+=y[i];
		netz+=z[i];
	}
	if(netx==0&&nety==0&&netz==0)
		cout<<"YES";
	else
		cout<<"NO";
}