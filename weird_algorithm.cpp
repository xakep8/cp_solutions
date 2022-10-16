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
	cout<<n<<" ";
	while(n!=1){
		if(n%2){
			n*=3;
			n+=1;
			cout<<n<<" ";
		}
		else{
			n/=2;
			cout<<n<<" ";
		}
	}
}