#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define sq(a) (a)*(a)

int solve(int n,vector<int> dat,vector<int> ptr){
	int sum=0;
	for(int i=n-1;i>0;i--){
		vector<int> temp;
		for(int j=0;j<n;j++){
			if(ptr[j]==i){
				temp.push_back(dat[j]);
			}
		}
	    int k=*min_element(temp.begin(),temp.end());
		sum+=min(k,dat[i-1]);
		for(int j=0;j<temp.size();j++){
		    if(temp[j]!=k){
			    sum+=temp[j];
		    }
		}
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		vector<int> dat,ptr;
		for(int j=0;j<n;j++){
		    int temp;
			cin>>temp;
			dat.push_back(temp);
		}
		for(int j=0;j<n;j++){
		    int temp;
			cin>>temp;
			ptr.push_back(temp);
		}
		int sum=solve(n,dat,ptr);
		cout<<"Case #"<<i<<": "<<sum;
	}
}