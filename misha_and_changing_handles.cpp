#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define sq(a) (a)*(a)
#define vi vector<int>
#define mp make_pair
#define ii pair<int,int>
#define vii vector<ii>

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;
        vector<tuple<int,string,string>> s;
        rep(i,0,n){
            string a,b;
            cin>>a>>b;
            s.pb(make_tuple(0,a,b));
        }
        while(!s.empty()){
            int flag=1;
            rep(i,0,s.size()-1){
                rep(j,i,s.size()){
                    if(get<2>(s[i])==get<1>(s[j])){
                        get<2>(s[i])=get<2>(s[j]);
                        s.erase(s.begin()+j);
                        get<0>(s[i])++;
                        flag=0;
                    }
                }
            }
            if(flag){
                break;
            }
        }
        sort(s.begin(),s.end());
        cout<<s.size()<<endl;
        rep(i,0,s.size()){
            cout<<get<1>(s[i])<<" "<<get<2>(s[i])<<endl;
        }
    // }
}