#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[5][5],tempi,tempj,move;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]){
				tempi=i;tempj=j;
			}
		}
	}
	move=abs(2-tempi)+abs(2-tempj);
	cout<<move;
}