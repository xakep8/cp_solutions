#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define sq(a) (a)*(a)
#define vi vector<int>

int food(int r,int unit,int *arr,int n){
	int tot=r*unit,sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum>=tot){
			return i+1;
		}
		else if(sum>0&&sum<tot)
			return 0;
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int r=7,unit=2,n=8;
	int arr[8];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<food(r,unit,arr,n);
}