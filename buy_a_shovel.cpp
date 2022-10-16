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
	int k,r;
	cin>>k>>r;
	int m=k%10,count=0;
	rep(i,1,10){
		if((k*i)%10==r||(k*i)%10==0){
			cout<<i<<endl;
			break;
		}
		else count++;
	}
	if(count==9){
		if(m==5){
			cout<<"2\n";
		}
		else if(m==2){
			cout<<"5\n";
		}
		else if(m==0){
			cout<<"1\n";
		}
		else
			cout<<k/10<<endl;
	}
}