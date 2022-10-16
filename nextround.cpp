#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,count=0;
	cin>>n>>k;
	int score[n];
	for(int i=0;i<n;i++){
		cin>>score[i];
	}
	for(int i=0;i<n;i++){
		if(score[0]==0){
			count=0;
			break;
		}
		else{
			if(score[k-1]==0){
				if(score[i]>score[k-1]){
					count++;
				}
			}
			else{
				if(score[i]>=score[k-1]){
					count++;
				}
			}
		}
	}
	cout<<count;
}