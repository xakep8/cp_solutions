#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define sq(a) (a)*(a)
#define vi vector<int>
#define mp make_pair

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int count=0,i=0,j=s.length()-1;
    while(true){
        char ch=s[i];
        int flag=0;
        count=0;
        while(i<=j&&s[i]==ch){
            i++;
            count++;
        }
        while(i<=j&&s[j]==ch){
            j--;
            count++;
            flag=1;
        }
        if(i>j&&count>=2){
            cout<<count+1<<endl;
            return 0;
        }
        else if(count<3||flag==0){
            break;
        }
    }
    cout<<0<<endl;
    return 0;
}