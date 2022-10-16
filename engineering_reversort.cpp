#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define sq(a) (a)*(a)
#define vi vector<int>

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int c,n;
		cin>>n>>c;
		if((c>=(n-1))&&(c<=(n*(n+1)/2)-1)){
			if(c==n-1){
				for(int i=1;i<=n;i++){
					cout<<i<<" ";
				}
			}
			else if(c==((n*(n+1))/2)-1){
				vi a;
				for(int i=1;i<=n;i++){
					a.pb(i);
				}
				for(int i=0;i<n-1;i++){
					reverse(a.begin(),a.end()-i);
				}
				for(int i=0;i<n;i++){
					cout<<a[i]<<" ";
				}
			}
		}
		cout<<endl;
	}
}