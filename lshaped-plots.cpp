#include <bits/stdc++.h>
using namespace std;

int count_row=0,count_col=0;

void solve(int r,int c){
	int a[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int k=0;k<c;k++){
			if(a[i][k]==1 && a[i][k+1]==1){
				count_row++;
			}
			if(a[k][i]==1 && a[k+1][i]==1){
				count_col++;
			}
		}
		if(2*count_col == count_row || 2*count_row==count_col){
			cout<<"good";
		}
	}
}

int main(){
	int t;
	cin>>t;
	int r[t],c[t];
	for(int i=0;i<t;i++){
		cin>>r[i]>>c[i];
		solve(r[i],c[i]);
	}
}