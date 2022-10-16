#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int a[t][4],ans[t];
	for(int i=0;i<t;i++){
		for(int j=0;j<4;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<t;i++){
		int m=a[i][0]/a[i][2];
		int n=a[i][1]/a[i][3];
		if(m>n){
			ans[i]=-1;
		}
		else if(n>m){
			ans[i]=1;
		}
		else{
			ans[i]=0;
		}
	}
	for(int i=0;i<t;i++){
		cout<<ans[i]<<endl;
	}
}