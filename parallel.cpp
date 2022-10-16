#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a,int n){
	for(int i=0;i<n;i++){

	}
}

int main(){
	int t;
	cin>>t;
	int n[t],ans[t];
	vector<vector<int> > a;
	for(int i=0;i<t;i++){
		cin>>n[i];
		vector<int> k;
		for(int j=0;j<n[i];j++){
			int temp;
			cin>>temp;
			k.push_back(temp);
		}
		a.push_back(k);
	}
	for(int i=0;i<t;i++){
		int temp=0;
		for(int j=0;j<n[i];j++){
			temp+=a[i][j];
		}
		temp/=2;
		int ti,count=0;
		for(int j=0;j<n[i];j++){
			if(a[i][j]>=temp){
				ti=j;
				break;
			}
			else{
				count++;
			}
		}
		if(count==n[i]){
			ans[i]=temp;
		}
		else{
			int t=0;
			for(int hw=0;hw<n[i];hw++){
				if(hw==ti){
					hw++;
				}
				else{
					t+=a[i][hw];
				}
			}
			ans[i]=max(t,a[i][ti]);
		}
	}
	for(int i=0;i<t;i++){
		cout<<ans[i]<<endl;
	}
}