#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int count=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i%2){
				cout<<"#";
			}
			else{
				if(count%2){
					if(j==m){
						cout<<"#";
					}
					else{
						cout<<".";
					}
				}
				else{
					if(j==1){
						cout<<"#";
					}
					else{
						cout<<".";
					}
				}
			}
		}
		cout<<endl;
		if(i%2==0){
			count++;
		}
	}
}