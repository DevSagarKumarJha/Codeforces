#include <iostream>
using namespace std;

long long sumRange(long long x) {
    return (x * (x + 1)) / 2;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long L, R;
        cin >> L >> R;

        if (L > R) {
            swap(L, R);
        }

        long long result = sumRange(R) - sumRange(L - 1);

        cout << result << endl;
    }

    return 0;
}

