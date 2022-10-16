//Balanced array codeforces
//printing 2*i till n/2 and the printing 2*i-1 till n/2-1
//the sum of the last n/2 elements is n/2 less than the sum of the first n/2 elements
//adding n to the last 2*(n/2)-1 and voila we get the array whose first n/2 elements are even
//and the last n/2 elements are odd and both halves have equal sum 
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
		ll n;
		cin>>n;
		n/=2;
		if(n&1){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
			for(ll i=1;i<=n;i++){
				cout<<i*2<<" ";
			}
			for(ll i=1;i<n;i++){
				cout<<(i*2)-1<<" ";
			}
			int m=(2*n)+n-1;
		}
	}
}