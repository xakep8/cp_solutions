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
		int n,count=0;
		cin>>n;
		vector<int> a;
		while(n!=0){
			if(n%10!=0){
				int temp=(n%10)*pow(10,count);
				a.pb(temp);
			}
			n/=10;
			count++;
		}
		cout<<a.size()<<endl;
		for(int i=0;i<a.size();i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}