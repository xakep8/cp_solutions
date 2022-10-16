#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[10],c=0;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	for(int i=0;i<3;i++){
		c=a[c];
	}
	cout<<c;
}