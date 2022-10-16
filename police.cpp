#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int sum=0,ans=0;
	for(int i=0;i<t;i++){
		int temp;
		cin>>temp;
		if(temp<0){
			if(!sum){
				ans++;
			}
			else{
				sum--;
			}
		}
		else if(temp>0){
			sum+=temp;
		}
	}
	cout<<ans;
}