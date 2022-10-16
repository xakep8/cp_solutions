#include<bits/stdc++.h>
using namespace std;

int isprime(int k){
	int count=0;
	for(int i=1;i<=k;i++){
		if(k%i==0){
			count++;
		}
	}
	if(count==2){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int n,m,count=0,prime=0;
	cin>>n>>m;
	if(isprime(m)){
		for(int i=n+1;i<m;i++){
			count=0;
			for(int j=1;j<=i;j++){
				if(i%j==0){
					count++;
				}
			}
			if(count==2){
				prime++;
			}
		}
		if(prime>0){
			cout<<"NO";
		}
		else{
			cout<<"YES";
		}
	}
	else{
		cout<<"NO";
	}
}