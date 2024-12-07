#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int length, queries;

    cin >> length >> queries;

    string word;

    cin >> word;

    int l, r, c;

    vector<int> consecutives(length, 0);

    for(int i = 1; i < length; i++){
        consecutives[i] = consecutives[i-1];
        if(word[i] == word[i-1]){
            consecutives[i]++;
        }
    }

    for(int i = 0; i < queries; i++){
        cin >> l >> r;

        cout << consecutives[r-1] - consecutives[l-1] << '\n';
    }

    return 0;
}
