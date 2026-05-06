#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];
    long long k;
    cin >> k;

    long long rem = A[0] % k;
    
    for (int i = 1; i < n; ++i) {
        if (A[i] % k != rem) {
            cout << -1 << endl;
            return 0;
        }
    }

    sort(A.begin(),A.end());
    long long median = A[n / 2];

    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += abs(A[i] - median)/k;
    }

    cout << ans << endl;
    return 0;
}
