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
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]==s[i+1]){
				s.erase(s.begin()+i);
			}
		}
		cout<<s<<endl;
	}
}