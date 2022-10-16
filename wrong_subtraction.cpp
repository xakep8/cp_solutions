#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,r;
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		r=n%10;
		if(r>0){
			n--;
		}
		else{
			n/=10;
		}
	}
	cout<<n;
}