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
	int a,b;
	cin>>a>>b;
	rep(i,0,b){
		if(i<a%b){
			cout<<(a/b)+1<<" ";
		}
		else cout<<a/b<<" ";
	}
}