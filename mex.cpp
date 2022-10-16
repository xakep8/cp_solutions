#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	for(int i=0;i<2*n;i++){
		cin>>
	}
}

int main(){
	int t;
	vector<string> ans;
	cin>>t;
	int n[t];
	for(int i=0;i<t;i++){
		int a[9];
		cin>>n[i];
		int ar[2*n[i]];
		for(int j=0;j<2*n[i];j++){
			cin>>ar[j];
			a[ar[j]]++;
		}
		for(int j=0;j<=n[i]+1;j++){
			if(a[j]==0){
				ans.push_back("YES");
				break;
			}
			else if(a[j]==1){
				ans.push_back("NO");
				break;
			}
		}
	}
	for(int i=0;i<t;i++){
		cout<<ans[i]<<endl;
	}
}