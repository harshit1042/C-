#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll l(b*c),r(a*d);
        if(l==r){
            cout<<"0"<<endl;
        }
        else if(l==0 || r==0){
            cout<<"1"<<endl;
        }
        else if(l%r==0||r%l==0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
}