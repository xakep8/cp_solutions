#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	char q[n];
	for(int i=0;i<n;i++){
		cin>>q[i];
	}
	for(int j=0;j<t;j++){
		for(int i=0;i<n;i++){
			if(q[i]=='B'&&q[i+1]=='G'){
				q[i]='G';
				q[i+1]='B';
				i++;
			}
			else{
				continue;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<q[i];
	}
}