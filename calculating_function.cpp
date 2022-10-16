#include<bits/stdc++.h>
using namespace std;

void solve(long long n){
	long long sum;
	if(n%2){
		sum=-((n+1)/2);
	}
	else{
		sum=n/2;
	}
	cout<<sum;
}

int main(){
	long long n;
	cin>>n;
	solve(n);
}