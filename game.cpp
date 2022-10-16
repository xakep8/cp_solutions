#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int ans[t];
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		int l=0;
		while(a[l]){
			l++;
		}
		int r=n;
		while(a[r-1]){
			r--;
		}
		if(r<l){
			ans[i]=0;
		}
		else{
			ans[i]=r-l+1;
		}
	}
	for(int i=0;i<t;i++){
		cout<<ans[i]<<endl;
	}
}