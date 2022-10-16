#include<bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
	int n,x=0;
	string temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp.find("++")!= string::npos){
			x++;
		}
		else if(temp.find("--")!= string::npos){
			x--;
		}
	}
	cout<<x;
}