#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,m,k;
    cin>>n>>m>>k;
    if(n+m<=k){
        cout<<"0 0"<<endl;
    }
    else if(n>=k){
        cout<<n-k<<" "<<m<<endl;
    }
    else{
        cout<<"0"<<" "<<m-(k-n)<<endl;
    }
}