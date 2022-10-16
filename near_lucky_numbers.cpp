#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	int luck=0;
	cin>>n;
	if(n==4||n==7){
		cout<<"NO";
	}
	else {
		while(n){
			if(((n%10)==4)||((n%10)==7)){
				luck++;
			}
			n=n/10;
		}
		if((luck==7)||(luck==4)){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
}