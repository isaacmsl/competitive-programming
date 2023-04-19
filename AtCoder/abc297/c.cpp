#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h,w;cin>>h>>w;
    string ss[h];
    for(int i=0;i<h;++i){
        cin>>ss[i];
        for(int j=0;j<w-1;++j){
            if(ss[i][j]=='T'&&ss[i][j+1]=='T'){
                ss[i][j]='P';
                ss[i][j+1]='C';
                ++j;
            }
        }
    }
    for(int i=0;i<h;++i) cout<<ss[i]<<endl;
    return 0;
}