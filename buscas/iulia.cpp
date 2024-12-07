#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    int size;

    

    cin >> tests;

    for(int i = 0; i < tests; i++){
        cin >> size;

        vector<int> glasses(size);

        for(int j = 0; j < size; j++){
            cin >> glasses[i];
        }

        int l = 0, r = size - 1;

        while(l <= r){
            int evensum = 0;
            int oddsum = 0;

            
        }
    }

    return 0;
}