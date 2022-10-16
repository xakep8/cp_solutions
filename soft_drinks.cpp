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
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int tot_dtoast=k/nl;
	if(tot_dtoast>n){
		tot_dtoast/=n;
	}
	int tot_stoast=p/np;
	if(tot_stoast>n){
		tot_stoast/=n;
	}
	int tot_ltoast=(c*d)/n;
	int x=min(tot_dtoast,tot_ltoast);
	cout<<min(tot_stoast,x);
}