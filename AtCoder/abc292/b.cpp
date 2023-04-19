#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int p[100];
int main() {
    int n,q,c,x;cin>>n>>q;
    while(q--){
        cin>>c>>x;
        if(c==3){
            cout<<((p[x]>1)?"Yes":"No")<<endl;
        }else{
            p[x]+=c;
        }
    }
    return 0;
}
