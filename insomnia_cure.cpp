#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,l,m,n,d;
	vector<int> v;
	cin>>k>>l>>m>>n>>d;
	for(int i=0;i<=d;){
		if(i!=0){
			v.push_back(i);
		}
		i+=k;
	}
	for(int i=0;i<=d;){
		if(i!=0){
			v.push_back(i);
		}
		i+=l;
	}
	for(int i=0;i<=d;){
		if(i!=0){
			v.push_back(i);
		}
		i+=m;
	}
	for(int i=0;i<=d;){
		if(i!=0){
			v.push_back(i);
		}
		i+=n;
	}
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	cout<<v.size();
}