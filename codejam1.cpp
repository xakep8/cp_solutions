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
		int n;
		cin>>n;
		vi a;
		for(int j=0;j<n;j++){
			int temp;
			cin>>temp;
			a.pb(temp);
		}
		int mi,k=0,pay=0;
		for(int j=0;j<n;j++){
			mi=min(a[0],a[a.size()-1]);
			if(k<=mi){
				if(mi==a[0]){
					k=a[0];
					a.erase(a.begin());
					pay++;
				}
				else if(mi==a[a.size()-1]){
					k=a[a.size()-1];
					a.pop_back();
					pay++;
				}
			}
			else{
				if(mi==a[0]){
					a.erase(a.begin());
				}
				else if(mi==a[a.size()-1]){
					a.pop_back();
				}
			}
		}
		cout<<"Case #"<<i<<": "<<pay<<endl;
	}
}