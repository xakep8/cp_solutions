#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,grei,smi;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	int gre=*max_element(a.begin(),a.end());
	int sm=*min_element(a.begin(),a.end());
	for(int i=0;i<n;i++){
		if(a[i]==gre){
			grei=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]==sm){
			smi=i;
			break;
		}
	}
	int ans=abs((grei-1)+(n-smi));
	if(grei>smi){
		ans--;
	}
	cout<<ans;
}