#include <iostream>
using namespace std;

int main() {
    int n, amount;
    cout << "Enter number of coin denominations: ";
    cin >> n;

    int coins[100];
    cout << "Enter coin values: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    cout << "Enter target amount: ";
    cin >> amount;

    int dp[1000];

    for (int i = 0; i <= amount; i++) {
        dp[i] = 1000000;
    }

    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i) {
                if (dp[i - coins[j]] + 1 < dp[i]) {
                    dp[i] = dp[i - coins[j]] + 1;
                }
            }
        }
    }

    if (dp[amount] == 1000000)
        cout << "It is not possible to make the amount" << endl;
    else
        cout << "Minimum number of coins needed = " << dp[amount] << endl;

    return 0;
}