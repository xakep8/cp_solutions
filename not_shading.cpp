#include<bits/stdc++.h>
using namespace std;

void solution(vector<vector <int> > ar,int n,int m, int r, int c){
	int brow=0,bcol=0;
	for(int i=0;i<m;i++){
		if(ar[r][i]=='B'){
			brow++;
		}
	}
	for(int i=0;i<n;i++){
		if(ar[i][c]=='B'){
			bcol++;
		}
	}
	if(bcol<brow){
		cout<<m-brow<<endl;
	}
	else{
		cout<<n-bcol<<endl;
	}
}

int main(){
	int t,n,m,r,c,temp;
	cin>>t;
	for(int i=0;i<t;i++){
		vector<vector<int> > ar;
		cin>>n>>m>>r>>c;
		for(int i=0;i<n;i++){
			vector<int> a;
			for(int j=0;j<m;j++){
				cin>>temp;
				a.push_back(temp);
			}
			ar.push_back(a);
		}
		solution(ar,n,m,r,c);
	}
}