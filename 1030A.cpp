#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,cnt=0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
        if(a[i]==1){
            cnt++;
        }
    }
    if(cnt>0){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
}
