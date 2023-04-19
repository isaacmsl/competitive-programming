#include<bits/stdc++.h>
using namespace std;

#define endl '\n'


int c[200000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (c[i] == 0) {
            c[x-1] = 1;
            ++qntC;
        }
    }

    int qnt = 0;
    for (int i = 0; i < n; i++) {
        if (c[i] == 0) {
            ++qnt;
        }
    }

    cout << qnt << endl;

    for (int i = 0; i < n; i++) {
        if (c[i] == 0) {
            if (qnt == 1) {
                cout << i + 1 << endl;
            } else {
                cout << i + 1 << " ";
            }
             
            --qnt;
        }
    }

    return 0;
}