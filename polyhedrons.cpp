#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,faces=0;
	cin>>n;
	vector<string> shapes;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		shapes.push_back(s);
	}
	for(int i=0;i<n;i++){
		string s=shapes[i];
		if(s=="Tetrahedron"){
			faces+=4;
		}
		else if(s=="Cube"){
			faces+=6;
		}
		else if(s=="Octahedron"){
			faces+=8;
		}
		else if(s=="Dodecahedron"){
			faces+=12;
		}
		else if(s=="Icosahedron"){
			faces+=20;
		}
	}
	cout<<faces;
}