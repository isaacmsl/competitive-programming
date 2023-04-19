#include<bits/stdc++.h>
using namespace std;

int h, w, qnt;
int m[10][10];
map<int, int> v;

void bt(int i, int j) {
    if (i == h || j == w) return;

    if (v[m[i][j]] == 1) {
        return;
    }

    if (i == (h - 1) && j == (w - 1)) {
        ++qnt;
        return;
    }

    v[m[i][j]] = 1;

    bt(i + 1, j);
    bt(i, j + 1);

    v[m[i][j]] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> m[i][j];
        }
    }  

    bt(0, 0);

    cout << qnt << endl;

    return 0;
}