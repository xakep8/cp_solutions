#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,count;
	cin>>n;
	int a[n][2];
	int result[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		count=0;
		if(a[i][0]%a[i][1]){
			int k=a[i][0]/a[i][1];
			while(a[i][0]!=((k+1)*a[i][1])){
				a[i][0]++;
				count++;
			}
		}
		result[i]=count;
	}
	for(int i=0;i<n;i++){
		cout<<result[i]<<endl;
	}
}