#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b,m[105];
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>b;
        m[b]=i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<m[i]<<" ";
    }
    
    return 0;
}