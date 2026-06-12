#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int N = 1e7;
    vector<int> prime;
    vector<bool> isPrime(N + 1, true);

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            prime.push_back(i);
            if (1LL * i * i <= N)
                for (int j = i * i; j <= N; j += i)
                    isPrime[j] = false;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long ans = 0;
        for (int p : prime) {
            if (p > n) break;
            ans += n / p;
        }

        cout << ans << '\n';
    }
}