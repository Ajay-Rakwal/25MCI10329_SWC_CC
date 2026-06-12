#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);

        p[n] = 1;

        for (int i = 2; i < n; i += 2) {
            p[i] = i + 1;
            p[i + 1] = i;
        }

        if (n % 2 == 0)
            p[1] = n;
        else
            p[1] = n - 1;

        for (int i = 1; i <= n; i++) {
            cout << p[i] << (i == n ? '\n' : ' ');
        }
    }

    return 0;
}