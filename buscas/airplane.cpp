#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p, q, r;

    cin >> p >> q >> r;

    vector<int> flights{p, q, r};

    sort(flights.begin(), flights.end());

    int sum = 0;

    flights.pop_back();

    for(int i : flights){
        sum += i;
    }

    cout << sum;

    return 0;
}