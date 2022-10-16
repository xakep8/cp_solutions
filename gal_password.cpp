#include<bits/stdc++.h>
using namespace std;

int check(long long a,long long n){
	long long count=0;
	vector<int> k;
	for(int i=0;i<n;i++){
		int temp=a%10;
		if(temp==0){
			return 0;
		}
		else{
			k.push_back(temp);
			a/=10;
		}
	}
	for(int i=0;i<n-1;i++){
		if(abs(k[i]-k[i+1])<=1){
			count++;
		}
	}
	if(count==(n-1)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	long long n,count=0,a=10;
	cin>>n;
	for(int i=1;i<n;i++){
		a*=10;
	}
	int b=a*10;
	for(int i=a;i<b;i++){
		if(check(i,n)){
			count++;
		}
	}
	cout<<count;
}