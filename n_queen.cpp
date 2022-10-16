#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	double val=1.000,intpart,fracpart,ter;
	cin>>t;
	int n[t],ans[t];
	for(int i=0;i<t;i++){
	    cin>>n[i];
	}
	for(int i=0;i<t;i++){
		ter=0;
		val=1.0000;
	    ter=(float)0.143*n[i];
	    for(int j=1;j<=n[i];j++){
	        val*=ter;
	    }
	    fracpart=modf(val,&intpart);
	    if(fracpart<0.5){
	        ans[i]=intpart;
	    }
	    else{
	        ans[i]=intpart+1;
	    }
	}
	for(int i=0;i<t;i++){
	    cout<<ans[i]<<endl;
	}
	return 0;
}
