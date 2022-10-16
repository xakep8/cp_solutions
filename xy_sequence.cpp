#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	long long ans[t];
	for(int i=0;i<t;i++){
		long long n,b,x,y;
		cin>>n>>b>>x>>y;
		long long a[n+1];
		a[0]=0;
		for(long long j=0;j<=n;j++){
			if((a[j]+x)<=b){
				a[j+1]=a[j]+x;
			}
			else{
				a[j+1]=a[j]-y;
			}
		}
		long long sum=0;
		for(long long j=0;j<=n;j++){
			sum+=a[j];
		}
		ans[i]=sum;
	}
	for(int i=0;i<t;i++){
		cout<<ans[i]<<endl;
	}
}