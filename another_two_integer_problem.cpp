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
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll k=abs(b-a);
		int i=10,count=0;
		while(k>0){
			if(k>=i){
				count+=(k/i);
				k%=i;
			}
			else{
				i--;
			}
		}
		cout<<count<<endl;
	}
}