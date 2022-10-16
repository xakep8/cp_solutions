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
	vector<int> a;
	for(int i=0;i<t-1;i++){
		int temp;
		cin>>temp;
		a.pb(temp);
	}
	sort(a.begin(),a.end());
	for(int i=0;i<t;i++){
		if(a[i]==(i+1)){
			continue;
		}
		else{
			cout<<i+1;
			break;
		}
	}
}