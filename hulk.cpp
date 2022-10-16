#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string p="I hate ",q="I love ",r="it",s="that ",t=p;
	for(int i=1;i<=n;i++){
		if(i==1){
			continue;
		}
		else if(i%2==0){
			t+=s+q;
		}
		else{
			t+=s+p;
		}
	}
	t+=r;
	cout<<t;
}