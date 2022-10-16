#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n,count=0,temp;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		cin>>temp;
		a.push_back(temp);
	}
	for(int i=0;i<n;i++){
		if((a[i]==i+1)&&(i!=0)&&(i!=n-1)){
			a.insert(a.begin()+i,i+1);
			count++;
		}
		else if(a[i]==i+1){
			a.insert(a.begin(),n+1);
			count++;
		}
	}
	return count;
}

int main(){
	int t;
	cin>>t;
	int ans[t];
	for(int i=0;i<t;i++){
		ans[i]=solve();
	}
	for(int i=0;i<t;i++){
		cout<<ans[i]<<endl;
	}
}