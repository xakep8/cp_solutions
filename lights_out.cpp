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
	int a[4][4],b[5][5]={0};
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(a[i][j]){
				b[i][j+1]+=a[i][j];
				b[i][j-1]+=a[i][j];
				b[i-1][j]+=a[i][j];
				b[i+1][j]+=a[i][j];
			}
		}
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(b[i][j]%2==0){
				cout<<1;
			}
			else cout<<0;
		}
		cout<<endl;
	}
}