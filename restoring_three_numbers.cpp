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
	ll arr[4];
	for(int i=0;i<4;i++){
		cin>>arr[i];
	}
	sort(arr,arr+4);
	ll a=abs((arr[1]+arr[0]-arr[2])/2),b=abs((arr[0]-arr[1]+arr[2])/2),c=abs(arr[2]-b);
	cout<<a<<" "<<b<<" "<<c;
}