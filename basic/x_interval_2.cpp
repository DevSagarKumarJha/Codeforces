#include <iostream>
using namespace std;

int main() {
    
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int intersectionStart = max(l1, l2);
    int intersectionEnd = min(r1, r2);

    if (intersectionStart <= intersectionEnd) {
        cout << intersectionStart << " " << intersectionEnd << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
