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
	for(int i=1;i<=t;i++){
		string s;
		cin>>s;
		char sm=s[0];
		for(int j=0;j<s.length();j++){
			if(s[j]<s[j+1]){
				sm=s[j];
			}
		}
		auto k=s.find(sm);
		s.insert(s.begin()+k,sm);
		k=find(s.begin()+k+1,s.end(),sm);
		if(s.begin()+k!=s.end()){
			s.insert(s.begin()+k,sm);
		}
		cout<<"Case #"<<i<<": "<<s<<endl;
	}
}