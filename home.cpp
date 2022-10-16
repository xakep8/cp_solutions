#include<bits/stdc++.h>
using namespace std;

bool ispal(string k){
    if(k.length()==1){
        return true;
    }
    string x=k;
    reverse(k.begin(),k.end());
    if(x==k){
        return true;
    }
    return false;
}

int removePalindromeSub(string s) {
    int count=0;
    while(true){
        string x="",ma="";
        for(int j=0;j<s.length();j++){
            x+=s[j];
            if(ispal(x)){
                if(x>ma){
                    ma=x;
                }
            }
        }
        int k=s.find(x);
        s.erase(s.begin()+k,s.begin()+k+ma.length());
        count++;
        if(s.length()==0){
            break;
        }
    }
    return count;
}

int main(){
    string s;
    cin>>s;
    cout<<removePalindromeSub(s);
}