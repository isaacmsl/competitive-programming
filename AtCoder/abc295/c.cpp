#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int, int> as;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        as[a]++;
    }

    int qnt = 0;
    for (const auto& a : as) {
        qnt += a.second / 2;
    }

    cout << qnt << endl;
    
    return 0;
}