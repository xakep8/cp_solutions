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
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int k;
		cin>>k;
		char dig[k];
		for(int i=0;i<k;i++){
			cin>>dig[i];
		}
		int count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				int bit=0;
				if(s[i]==dig[j]&&i!=0){
					s.erase(s.begin()+i-1);
					i-=2;
					bit=1;
				}
				if(bit){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}