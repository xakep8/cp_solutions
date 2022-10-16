#include<bits/stdc++.h>
using namespace std;

int main(){
	float a,b,c,x;
	float p;
	cin>>a>>b>>c>>x;
	if(a>=x){
		p=1;
	}
	else if(x<=b){
		float temp=b-a;
		p=(float)c/temp;
	}
	else{
		p=0;
	}
	printf("%f",p);
}