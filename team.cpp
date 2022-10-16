#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,sure,count=0;
	cin>>n;
	int prob[n][3];
	for(int i=0;i<n;i++){
		sure=0;
		for(int j=0;j<3;j++){
			cin>>prob[i][j];
			if(prob[i][j]==1){
				sure++;
			}
		}
		if(sure>=2){
			count++;
		}
	}
	cout<<count;
}