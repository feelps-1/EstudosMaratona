#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int size;

    cin >> size;

    vector<int> numbers(size);

    for(int i = 0; i < size; i++){
        cin >> numbers[i];
    }

    long long res = numbers[0];
    long long maxEnding = numbers[0];

    for (int i = 1; i < size; i++) {
        maxEnding = max(maxEnding + (long long)numbers[i], (long long)numbers[i]);
        res = max(res, maxEnding);
    }
    cout << res;

    return 0;
}   
