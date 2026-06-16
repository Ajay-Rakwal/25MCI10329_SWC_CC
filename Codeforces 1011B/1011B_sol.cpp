#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> freq(101, 0);

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    auto can = [&](int days) {
        int people = 0;

        for (int f : freq)
            people += f / days;

        return people >= n;
    };

    int lo = 0, hi = m;

    while (lo < hi) {
        int mid = (lo + hi + 1) / 2;

        if (mid > 0 && can(mid))
            lo = mid;
        else
            hi = mid - 1;
    }

    cout << lo << '\n';
    return 0;
}