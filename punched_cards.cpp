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
	int k=t;
	while(t--){
		cout<<"Case #"<<k-t<<":"<<endl;
		int r,c;
		cin>>r>>c;
		for(int i=1;i<=2*r+1;i++){
			for(int j=1;j<=2*c+1;j++){
				if((i==1&&(j==1||j==2))||(i==2&&(j==1||j==2))){
					cout<<".";
				}
				else if(i%2){
					if(j%2){
						cout<<"+";
					}
					else{
						cout<<"-";
					}
				}
				else{
					if(j%2){
						cout<<"|";
					}
					else{
						cout<<".";
					}
				}
			}
			cout<<endl;
		}
	}
}