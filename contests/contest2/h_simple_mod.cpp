#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Function to perform prime factorization
vector<pair<long long, int>> primeFactorization(long long N) {
    vector<pair<long long, int>> factors;
    for (long long p = 2; p * p <= N; ++p) {
        if (N % p == 0) {
            int count = 0;
            while (N % p == 0) {
                N /= p;
                count++;
            }
            factors.push_back({p, count});
        }
    }
    if (N > 1) {
        factors.push_back({N, 1});
    }
    return factors;
}

// Function to check if a number can be written as a sum of two squares
bool isSumOfTwoSquares(long long N) {
    auto factors = primeFactorization(N);
    for (auto &[prime, exponent] : factors) {
        if (prime % 4 == 3 && exponent % 2 != 0) {
            return false; // If a prime of the form 4k+3 has an odd exponent, N is not a sum of two squares.
        }
    }
    return true;
}

// Function to find a pair (x, y) such that x^2 + y^2 = N
pair<long long, long long> findSumOfSquares(long long N) {
    for (long long x = 0; x * x <= N; ++x) {
        long long y2 = N - x * x;
        long long y = sqrt(y2);
        if (y * y == y2) {
            return {x, y};
        }
    }
    return {0, 0}; // If no pair is found, return (0, 0)
}

int main() {
    string N_str;
    cin >> N_str;

    if (N_str.size() > 18) {
        cout << 0 << " " << 0;
    } else {
        long long N = stoll(N_str);

        // Check if N can be expressed as a sum of two squares
        if (isSumOfTwoSquares(N)) {
            auto [x, y] = findSumOfSquares(N);
            cout << x << " " << y << endl;
        } else {
            cout << 0 << " " << 0 << endl;
        }
    }

    return 0;
}
