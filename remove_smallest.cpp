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
		int n;
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			a.push_back(temp);
		}
		int k=*min_element(a.begin(),a.end());
		for(int i=0;i<n;i++){
			a[i]-=k;
		}
		sort(a.begin(),a.end());
		a.erase(unique(a.begin(),a.end()),a.end());
		int count=0;
		for(int i=0;i<a.size();i++){
			if(i==a[i]||a[i]==0){
				count++;
			}
		}
		if(count==a.size()){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}