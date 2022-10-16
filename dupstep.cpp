#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define sq(a) (a)*(a)
#define vi vector<int>
#define mp make_pair

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=2;
            if(flag){
                cout<<" ";
            }
        }
        else{
            flag=1;
            cout<<s[i];
        }
    }
}