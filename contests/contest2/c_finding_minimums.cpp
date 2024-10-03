#include <iostream>
#include <limits.h> // For INT_MAX
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int count = 0;
    int currentNum, minVal = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        cin >> currentNum;

        if (currentNum < minVal)
        {
            minVal = currentNum;
        }

        count++;
        if (count == K || i == N - 1)
        {
            cout << minVal << " ";
            minVal = INT_MAX;
            count = 0;
        }
    }

    return 0;
}
