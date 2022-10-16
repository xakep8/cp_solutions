#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,gre=0,tempi,temp;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		cin>>temp;
		a.push_back(temp);
		if(temp>gre){
			tempi=i+1;
			gre=temp;
		}
	}
	sort(a.begin(),a.end());
	cout<<tempi<<" "<<a[n-2];
}