#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	int n,temp,count=0;
	cin>>n;
	int p[2];
	vector<int> v;
	for(int i=0;i<2;i++){
		cin>>p[i];
		for(int j=0;j<p[i];j++){
			cin>>temp;
			v.push_back(temp);
		}
	}
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	if(v.empty()){
		cout<<"Oh, my keyboard!";
	}
	else{
		for(int i=1;i<=n;i++){
			if(v[i-1]==i){
				count++;
			}
		}
		if(count==n){
			cout<<"I become the guy.";
		}
		else{
			cout<<"Oh, my keyboard!";
		}
	}
}