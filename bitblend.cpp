#include<bits/stdc++.h>
using namespace std;

int parity(int n){
	int x=n%2;
	return x;
}

int solution(vector<int> num){
	int count=0;
	for(int i=0;i<num.size();i++){
		if(parity(num[i]&num[i+1])==parity(num[i]|num[i+1])){
			num[i]=num[i]^num[i+2];
			count++;
		}
	}
	return count;
}

int main(){
	int t,n,temp;
	vector<int> res;
	vector<vector<int> > arr;
	cin>>t;
	for(int i=0;i<t;i++){
		vector<int> num;
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>temp;
			num.push_back(temp);
		}
		res.push_back(solution(num));
		arr.push_back(num);
	}
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<endl;
	}
}