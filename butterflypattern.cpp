#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++){
			if(j=1||j=8){
				for(int k;k<=i;k++){
					cout<<"*";
				}
			}
			else{
				cout<<" ";
			}
		}
	}
}