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
	ll a[t];
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	ll moves=0;
	for(int i=0;i<t-1;i++){
		if(a[i]>a[i+1]){
			moves+=a[i]-a[i+1];
			a[i+1]=a[i];
		}
	}
	cout<<moves;
}