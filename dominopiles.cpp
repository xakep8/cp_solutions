#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,n,dominos,tempi=0,tempj=0;
	cin>>m>>n;
	if((m==1)&&(n%2==0)){
		dominos=m*(n/2);
	}
	else if((m%2==0)&&(n==1)){
		dominos=n*(m/2);
	}
	else if((m%2==0)&&(n%2==0)){
		tempi=m/2;
		dominos=(tempi*n);
	}
	else if((m%2)&&(n%2==0)){
		tempi=m/2;
		tempj=n/2;
		dominos=(tempi*n)+((m%2)*tempj);
	}
	else if((m%2)&&(n%2)){
		dominos=(((n/2)*m)+((m/2)*(n%2)));
	}
	else if((m%2==0)&&(n%2)){
		dominos=((m/2)*n)+((n/2)*m%2);
	}
	cout<<dominos;
}