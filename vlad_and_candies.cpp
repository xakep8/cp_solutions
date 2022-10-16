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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    int sum=0,tot=0;
    for(int i=0;i<n;i++){
        tot+=a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
        count++;
        if(sum>tot-sum){
            break;
        }
    }
    cout<<count<<endl;
}