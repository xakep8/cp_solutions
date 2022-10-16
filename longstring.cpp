#include<bits/stdc++.h>
using namespace std;

int main(){
	string n,k;
	vector<string> the_string;
	int a,m;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>n;
		m=n.length();
		if(m>10){
			k=n[0]+to_string(m-2)+n[m-1];
			the_string.push_back(k);
		}
		else{
			the_string.push_back(n);
		}
	}
	for(int i=0;i<a;i++){
		cout<<the_string[i]<<endl;
	}
}