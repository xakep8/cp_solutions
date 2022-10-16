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
	for(int i=0;i<t;i++){
		int x,y;
		cin>>x>>y;
		if(x==0&&y==0){
			cout<<"0";
		}
		else{
			double k=pow(x,2)+pow(y,2);
			k=sqrt(k);
			int m=(int)k;
			if(m==k){
				cout<<"1";
			}
			else{
				cout<<"2";
			}
		}
	}
}