#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void solve(vector<int> arr, int n, int k){
	sort(arr.begin(),arr.end());
	vector <int> small;
	vector <int> gre;
	for(int i=0;i<n;i++){
		if(arr[i]<k){
			small.push_back(arr[i]);
		}
		else{
			gre.push_back(arr[i]);
		}
	}
	for(int i=0;i<(int)small.size();i++){
		small[i]+=k;
	}
	for(int i=0;i<(int)gre.size();i++){
		gre[i]-=k;
	}
	int j=(int)small.size();
	int y=(int)gre.size();
	cout<<gre[y-1]-small[j-1];
}

int main(){
	int t;
	int k,temp;
	vector <int> arr;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	cin>>k;
	solve(arr,t,k);
}