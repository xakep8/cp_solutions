#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,ban,app;
	cin>>t;
	int b[t],a[t],chaat[t];
	for(int i=0;i<t;i++){
		cin>>b[i]>>a[i];
		ban=b[i]/2;
		app=a[i]/1;
		if(ban<app){
			chaat[i]=ban;
		}
		else{
			chaat[i]=app;
		}
	}
	for(int i=0;i<t;i++){
		cout<<chaat[i]<<endl;
	}
}