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
	for(int i=1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		vector<ll> c,m,y,k,min;
		for(int j=0;j<3;j++){
		    ll c1,m1,y1,k1;
			cin>>c1>>m1>>y1>>k1;
			c.push_back(c1);
			m.push_back(m1);
			y.push_back(y1);
			k.push_back(k1);
		}
		ll minc=*min_element(c.begin(),c.end());
		ll minm=*min_element(m.begin(),m.end());
		ll miny=*min_element(y.begin(),y.end());
		ll mink=*min_element(k.begin(),k.end());
		min.push_back(minc);
		min.push_back(minm);
		min.push_back(miny);
		min.push_back(mink);
		if((minc+minm+miny+mink)>=1000000){
			int sum=0;
			for(int i=0;i<4;i++){
				if(sum<1000000){
					sum+=min[i];
					if(sum<=1000000)
						cout<<min[i];
					else if(sum>1000000){
						sum-=1000000;
						cout<<min[i]-sum;
						sum=1000000;
					}
					if(i<3){
					    cout<<" ";
					}
				}
				else if(sum==1000000){
					cout<<"0";
				}
				if(i<3){
					cout<<" ";
				}
			}
		}
		else{
		    cout<<"IMPOSSIBLE";
		}
		if(i<t){
		    cout<<endl;
		}
	}
}