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
		int l=0,r=0;
		int k=*min_element(a,a+n),l;
		for(int j=0;j<n;j++){
			if(a[j]==k){
				l=j;
				break;
			}
		}
		for(int j=0;j<=l;j++){
			int x=a[j];
			a[j]=a[l-j];
			a[l-j]=x;
		}
		for(int j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
}