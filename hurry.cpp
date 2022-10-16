#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,count=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		int sum=5*((i*(i+1))/2);
		sum+=k;
		if(sum==240){
			cout<<i<<endl;
			break;
		}
		else if(sum>240){
		    cout<<i-1<<endl;
		    break;
		}
		else{
		    count++;
		}
	}
	if(count==n){
	    cout<<n;
	}
}