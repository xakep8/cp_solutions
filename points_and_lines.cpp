#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,count;
	cin>>t;
	int n[t],ans[t];
	for(int i=0;i<t;i++){
		count=2;
		cin>>n[i];
		int x[n[i]],y[n[i]];
		for(int j=0;j<n[i];j++){
			cin>>x[j]>>y[j];
		}
		int k=sizeof(x)/sizeof(x[0]);
		sort(x,x+k);
		sort(y,y+k);
		for(int j=0;j<n[i]-1;j++){
			if(x[j]!=x[j+1]){
				count++;
			}
			if(y[j]!=y[j+1]){
				count++;
			}
		}
		ans[i]=count;
	}
	for(int i=0;i<t;i++){
		cout<<ans[i]<<endl;
	}
}