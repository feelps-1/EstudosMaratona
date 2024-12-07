#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tests, size, cars;
    int cross = 0;
    int total_length = 0;

    cin >> tests;

    string side;
    int car_size;

    queue<int> left, right;

    for(int i = 0; i < tests; i++){
        cross = 0;
        cin >> size >> cars;

        size *= 100;

        for(int j = 0; j < cars; j++){
            cin >> car_size >> side;

            if(side == "left"){
                left.push(car_size);
            }else{
                right.push(car_size);
            }

        }

        bool on_left = true;

        while(!left.empty() || !right.empty()){
            total_length = 0;

            if(on_left){
                while(!left.empty() && total_length + left.front() <= size){
                    total_length += left.front();
                    left.pop();
                }
            }else{
                while(!right.empty() && total_length + right.front() <= size){
                    total_length += right.front();
                    right.pop();
                }
            }

            cross++;
            on_left = !on_left;
        }

        cout << cross << '\n';

    }

    return 0;
}
