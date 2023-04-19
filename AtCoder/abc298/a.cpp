#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    string s;cin>>s;
    int g=0,p=0;
    for(int i=0;i<n;++i){
        if(s[i]=='o') g=1;
        else if(s[i]=='x') p=1;
    }
    cout<<((g&&!p)? "Yes\n":"No\n");
    return 0;
}