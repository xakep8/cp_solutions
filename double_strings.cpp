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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string mp[n];
        map<string,bool> s;
        for(int i=0;i<n;i++){
            cin>>mp[i];
            s[mp[i]]=true;
        }
        string ans="";
        for(int k=0;k<n;k++){
            int flag=1;
            for(int i=0;i<mp[k].length();i++){
                string pref=mp[k].substr(0,i),suff=mp[k].substr(i,mp[k].length());
                if(s[pref]&&s[suff]){
                    flag=0;
                }
                if(flag==0){
                    ans+='1';
                    break;
                }
            }
            if(flag){
                ans+='0';
            }
        }
        cout<<ans<<endl;
    }
}