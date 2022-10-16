#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define sq(a) (a)*(a)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		vector<int> a;
		for(int j=0;j<n;j++){
		    int temp;
			cin>>temp;
			a.push_back(temp);
		}
		sort(a.begin(),a.end());
		int len=0;
		for(int j=0;j<a.size();j++){
			if(j+1<=a[j]){
				len++;
			}
			else{
			    a.erase(a.begin()+j);
			    j--;
			}
		}
		cout<<"Case #"<<i<<": "<<len<<endl;
	}
}