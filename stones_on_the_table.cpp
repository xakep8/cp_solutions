#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,count=0;
	cin>>n;
	char stones[n];
	for(int i=0;i<n;i++){
		cin>>stones[i];
	}
	for(int i=0;i<n;i++){
		if(stones[i]==stones[i+1]){
			count++;
		}
	}
	cout<<count;
}