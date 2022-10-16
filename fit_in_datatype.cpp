#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,yo;
	cin>>t;
	int n[t],x[t],data[t];
	for(int i=0;i<t;i++){
		cin>>n[i]>>x[i];
		if(x[i]>n[i]){
			while(x[i]>n[i]){
				x[i]=x[i]-n[i]-1;
			}
			data[i]=x[i];
		}
		else{
			data[i]=x[i];
		}
	}
	for(int i=0;i<t;i++){
		cout<<data[i]<<endl;
	}
}