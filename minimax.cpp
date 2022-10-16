#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long temp,sum=0;
	vector<long> k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		k.push_back(temp);
		sum+=temp;
	}
	vector<int> x;
	for(int i=0;i<n;i++){
		temp=sum;
		temp-=k[i];
		x.push_back(temp);
	}
	sort(x.begin(),x.end());
	cout<<x[0]<<x[4];
}