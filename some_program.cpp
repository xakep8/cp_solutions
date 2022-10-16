#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		int l,r;
		for(int j=0;j<n;j++){
			if(a[j]!=j+1){
				for(int k=j;k<n;k++){
					if(a[k]=j+1){
						r=k;
						break;
					}
				}
				l=j;
				break;
			}
		}
		while(r>l){
			int x=a[l];
			a[l]=a[r];
			a[r]=x;
			l++;
			r--;
		}
		for(int j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
}