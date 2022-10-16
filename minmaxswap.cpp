#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int solution(vector<int> a, vector<int> b){
	int temp,ans=0,agre=0,bgre=0;
	for(int i=0;i<a.size();i++){
		if(a[i]>b[i]){
			temp=a[i];
			a[i]=b[i];
			b[i]=temp;
		}
	}
	for(int i=0;i<a.size();i++){
		agre=max(agre,a[i]);
		bgre=max(bgre,b[i]);
	}
	ans=agre*bgre;
	return ans;	
}


int main(){
	int t,n,temp;
	cin>>t;
	int ans[t];
	for(int i=0;i<t;i++){
		vector<int> a;
		vector<int>b;
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>temp;
			a.push_back(temp);
		}
		for(int j=0;j<n;j++){
			cin>>temp;
			b.push_back(temp);
		}
		ans[i]=solution(a,b);
	}
	for(int i=0;i<t;i++){
		cout<<ans[i]<<endl;
	}
}