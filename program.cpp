#include <iostream>
using namespace std;

int main(){
	int t,count=0;
	cin>>t;
	string s[t];
	int n[t],k[t];
	int x;
	for(int i=0;i<t;i++){
		cin>>n[i]>>k[i];
		cin>>s[i];
	}
	for(int i=0;i<t;i++){
		x = n[i]-1;
		for(int j=0;j<n[i]/2;j++){
			if(s[i][j]!=s[i][x-j]){
				count++;
			}
		}
		cout<<"Case #"<<i+1<<":"<<k[i]-count<<endl<<count;
	}
}