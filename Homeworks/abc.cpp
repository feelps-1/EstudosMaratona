#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string prompt;
    cin >> prompt;

    string result;

    for (char c : prompt) {
        result.push_back(c);

        if (result.size() >= 3 && result.substr(result.size() - 3) == "ABC") {
            result.erase(result.size() - 3, 3); 
        }
    }

    cout << result << "\n";
    return 0;
}
