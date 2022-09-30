#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int cnt=0,cnt1=0;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a>0){
            cnt+=a;
        }
        else{
            if(cnt<1){
                cnt1++;
            }
            else{
                cnt--;
            }
        }
    }
    cout<<cnt1<<endl;
    return 0;
}
