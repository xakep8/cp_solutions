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
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		vi a;
		for(int j=0;j<n;j++){
			int temp;
			cin>>temp;
			a.pb(temp);
		}
		int cost=0;
		for(int j=0;j<n-1;j++){
			vector<int>::iterator k=min_element(a.begin()+j,a.end());
			reverse(a.begin()+j,k+1);
			cost+=distance(a.begin(),k)-j+1;
		}
		cout<<"Case #"<<i<<": "<<cost<<endl;
	}
}