#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,temp;
	cin>>n>>temp;
	int min=temp,max=temp,count=0;
	while(--n){
		cin>>temp;
		if(temp>max){
			max=temp;
			++count;
		}
		if(temp<min){
			min=temp;
			++count;
		}
	}
	cout<<count<<endl;
}