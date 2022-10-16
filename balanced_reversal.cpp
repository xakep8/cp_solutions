#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
    	string s;
    	cin>>s;
    	int ze=0,one=0;
    	for(int j=0;j<n;j++){
    		if(s[j]=='0'){
    			ze++;
    		}
    		else{
    			one++;
    		}
    	}
    	for(int j=0;j<ze;j++){
    	    cout<<"0";
    	}
    	for(int j=0;j<one;j++){
    		cout<<"1";
    	}
    	cout<<endl;
	}
}