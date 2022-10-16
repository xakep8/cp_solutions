#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,build=0,inv=1,count=0;
	cin>>t;
	int h[t],op[t],ans[t];
	for(int i=0;i<t;i++){
		count=0;
		build=0;
		inv=1;
		cin>>h[i]>>op[i];
		for(int j=0;j<op[i];j++){
			if(inv>(h[i]-build)){
				build+=h[i]-build;
			}
			else{
				build+=inv;
				inv=build;
			}
			if(build==h[i]){
				count++;
				build=0;
			}
		}
		ans[i]=count;
	}
	for(int i=0;i<t;i++){
		cout<<ans[i]<<endl;
	}
}