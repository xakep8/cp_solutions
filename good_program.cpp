#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,temp;
	cin>>t;
	vector<string> a;
	for(int i=0;i<t;i++){
		cin>>temp;
		if(temp%4==0){
			a.push_back("Good");
		}
		else{
			a.push_back("Not Good");
		}
	}
	for(int i=0;i<t;i++){
		cout<<a[i]<<endl;
	}
}