#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		vector<int> v;
		for(int j=0;j<4;j++){
			int temp;
			cin>>temp;
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		ll wa=(v[0]+v[2])/2;
		ll wb=(v[2]-wa);
		ll xa=(v[2]+v[1])/2;
		ll xb=v[2]-xa;
		ll ya=(v[3]+v[0])/2;
		ll yb=v[3]-ya;
		ll za=(v[3]+v[1])/2;
		ll zb=v[3]-za;
		if((wa%1==0)&&(wa!=0)&&(wb%1==0)&&(wb!=0)){
			if((wa/wb==v[1])&&(wa*wb==v[3])&&(wa>=1)&&(wb>=1)&&(wa<=10000)&&(wb<=10000)){
				cout<<wa<<" "<<wb<<endl;
				continue;
			}
		}
		if((xa%1==0)&&(xa!=0)&&(xb%1==0)&&(xb!=0)){
			if((xa/xb==v[0])&&(xa*xb==v[3])&&(xa>=1)&&(xb>=1)&&(xa<=10000)&&(xb<=10000)){
				cout<<xa<<" "<<xb<<endl;
				continue;
			}
		}
		if((ya%1==0)&&(ya!=0)&&(yb%1==0)&&(yb!=0)){
			if((ya/yb==v[1])&&(ya*yb==v[2])&&(ya>=1)&&(yb>=1)&&(ya<=10000)&&(yb<=10000)){
				cout<<ya<<" "<<yb<<endl;
				continue;
			}
		}
		if((za%1==0)&&(zb!=0)&&(za%1==0)&&(zb!=0)){
			if((za/zb==v[0])&&(za*zb==v[2])&&(za>=1)&&(zb>=1)&&(za<=10000)&&(zb<=10000)){
				cout<<za<<" "<<zb<<endl;
				continue;
			}
		}
		cout<<"-1 -1"<<endl;
	}
}