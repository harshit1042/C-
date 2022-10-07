#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int min=r/(b+1);
        int cntb=(r%(b+1));
        string s;
        for (int i = 0; i < b+1-cntb; i++)
        {
            string s1(min,'R');
            s+=s1;
            s+='B';
        }
        for (int i = 0; i < cntb; i++)
        {
            string s1(min+1,'R');
            s+=s1;
            s+='B';
        }
        s.pop_back();
        cout<<s<<endl;
        
        
    }
}