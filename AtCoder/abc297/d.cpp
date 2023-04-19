#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;cin>>a>>b;
    ll q=0;
    while(a!=b&&a!=0&&b!=0){
        if(a<b){
            q+=b/a;
            b%=a;
        }else{
            q+=a/b;
            a%=b;
        }
    }
    if(a==0||b==0)--q;
    cout<<q<<endl;
    return 0;
}