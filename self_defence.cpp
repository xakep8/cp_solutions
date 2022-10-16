#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,temp;
	cin>>t;
	int n[t],count[t];
	vector<vector<int> > k;
	vector<int> a;
	for(int i=0;i<t;i++){
		cin>>n[i];
		a.clear();
		for(int j=0;j<n[i];j++){
			cin>>temp;
			a.push_back(temp);
		}
		k.push_back(a);
	}
	for(int i=0;i<t;i++){
		int c=0;
		for(int j=0;j<n[i];j++){
			if((k[i][j]>=10)&&(k[i][j]<=60)){
				c++;
			}
		}
		count[i]=c;
	}
	for(int i=0;i<t;i++){
		cout<<count[i]<<endl;
	}
}