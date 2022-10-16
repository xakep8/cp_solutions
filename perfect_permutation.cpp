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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	if(n&1){
		cout<<-1;
	}
	else{
		int k=1;
		while(2*k<=n){
			t=a[2*k-1];
			a[2*k-1]=a[2*k-2];
			a[2*k-2]=t;
			k++;
		}
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
	}
}