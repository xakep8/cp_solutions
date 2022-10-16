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
	string s;
	cin>>s;
	int count=1;
	vector<int> ans;
	for(int i=0;i<s.length();i++){
		if(s[i]==s[i+1]){
			count++;
		}
		else{
			ans.pb(count);
			count=1;
		}
	}
	sort(ans.begin(),ans.end(),greater<int>());
	cout<<ans[0];
}