#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;

    cin >> size;

    vector<int> toys(size);
    vector<int> boxes(size);

    for(int i = 0; i < size; i++){
        cin >> toys[i];
    }

    for(int i = 0; i < size-1; i++){
        cin >> boxes[i];
    }

    sort(toys.begin(), toys.end());

    int left = 0, right = *max_element(toys.begin(), toys.end());
    int result = -1;
    vector<int> copy_boxes = boxes;

    while(left<=right){
        int x = (left+right)/2;
        copy_boxes = boxes;
        copy_boxes.push_back(x);
        sort(copy_boxes.begin(), copy_boxes.end());

        int j = 0;

        for(int box: copy_boxes){
            if (j < toys.size() && toys[j] <= box) {
                j++; 
            }
        }

        if(j == toys.size()){
            result = x;
            right = x - 1;
        }else{
            left = x + 1;
        }

    }

    cout << result;

    return 0;
}
