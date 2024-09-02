#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a, b;
    cin>>a>>b;
    if(a%2 == 0 && b%2 == 0){
        cout<<"YES"<<endl;
        return;
    }
    if(a==0 && b%2!=0 || a%2!=0){
        cout<<"No"<<endl;
        return;
    }
        cout<<"Yes"<<endl;
        return;
    
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}