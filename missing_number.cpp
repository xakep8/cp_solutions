#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define sq(a) (a)*(a)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[n];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i]!=i+1){
			cout<<i+1;
		}
	}
}