#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define sq(a) (a)*(a)
#define vi vector<int>
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n,p;
		cin>>n>>p;
		vector<vector<int> > a;
		for(int j=0;j<n;j++){
			vector<int> l;
			for(int k=0;k<p;k++){
				int temp;
				cin>>temp;
				l.pb(temp);
			}
			if(j==n-2){
				sort(l.begin(),l.end(),greater<int>());
			}
			else{
				sort(l.begin(),l.end());
			}
			a.pb(l);
		}
		int sum=0,x=0;
		for(int j=0;j<n;j++){
			for(int k=0;k<p;k++){
				if(j==0&&k==0){
					sum+=a[0][0];
					x=a[0][0];
				}
				else{
					sum+=abs(a[j][k]-x);
					x=a[j][k];
				}
			}
		}
		cout<<"Case #"<<i<<": "<<sum<<endl;
	}
}