#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int temp;
    set<int> numbers;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        numbers.insert(temp);
    }

    cout << numbers.size();

    return 0;
}
