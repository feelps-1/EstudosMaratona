#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numsegments;
    bool is_possible = false;

    cin >> numsegments;

    vector<int> segments(numsegments);

    for(int i = 0; i < numsegments; i++){
        cin >> segments[i];
    }

    sort(segments.begin(), segments.end());

    for(int j = 0; j < numsegments-2; j++){
        if(segments[j] + segments[j+1] > segments[j+2]){
            is_possible = true;
            break;
        }
    }

    if(is_possible){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

}
