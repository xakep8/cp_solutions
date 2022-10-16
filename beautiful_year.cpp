#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	int r,arr[10]={0},count=0,digits=0,onum=n;
	while(n){
		r=n%10;
		arr[r]++;
		n/=10;
		digits++;
	}
	for(int i=0;i<10;i++){
		if(arr[i]==1){
			count++;
		}
	}
	if(count==digits){
		cout<<onum;
	}
	else{
		solve(onum+1);
	}
}




int main(){
	int n;
	cin>>n;
	solve(n+1);
}