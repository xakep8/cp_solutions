#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ant=0,dan=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='A'){
			ant++;
		}
		else{
			dan++;
		}
	}
	if(ant>dan){
		cout<<"Anton";
	}
	else if(dan>ant){
		cout<<"Danik";
	}
	else{
		cout<<"Friendship";
	}
}