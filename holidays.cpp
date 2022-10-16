#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,temp;
	cin>>t;
	int n[t],ans[t];
	vector<vector<int> > k;
	vector<int> a;
	for(int i=0;i<t;i++){
		cin>>n[i];
		for(int j=0;j<n[i];j++){
			cin>>temp;
			a.push_back(temp);
		}
		k.push_back(a);
	}
	for(int i=0;i<t;i++){
		int count=8;
		for(int j=0;j<n[i];j++){
			int day=(k[i][j]-7);
			int dd=(k[i][j]-6);
			if((day%7)||(dd%7)){
				count++;
			}
		}
		ans[i]=count-1;
	}
	for(int i=0;i<t;i++){
		cout<<ans[i]<<endl;
	}
}