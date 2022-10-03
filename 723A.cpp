#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,n4,d;
    cin>>a>>b>>c;
    int n1,n2,n3;
    n1=abs(a-b);
    n2=abs(b-c);
    n3=abs(a-c);
    n4=max(n1,n2);
    d=max(n4,n3);
    cout<<d<<endl;
    return 0;
}
