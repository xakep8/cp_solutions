#include<bits/stdc++.h>
#include<sstream>
#include<string.h>
using namespace std;

int main(){
	string s;
	int temp;
	vector<int> numbers;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			if(s[i]=='1'){
				temp=1;
			}
			else if(s[i]=='2'){
				temp=2;
			}
			else{
				temp=3;
			}
			numbers.push_back(temp);
		}
	}
	sort(numbers.begin(),numbers.end());
	for(int i=0;i<numbers.size();i++){
		cout<<numbers[i];
		if(i!=(numbers.size()-1)){
			cout<<"+";
		}
	}
}