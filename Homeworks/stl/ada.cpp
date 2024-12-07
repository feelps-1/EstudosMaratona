#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int queries;
    cin >> queries;

    string prompt;
    int element;

    deque<int> ada;
    bool reversed = false; // Flag to track the direction

    for (int i = 0; i < queries; i++) {
        cin >> prompt;

        if (prompt == "back" || prompt == "front") {
            if (ada.empty()) {
                cout << "No job for Ada?" << '\n';
            } else {
                if ((prompt == "back" && !reversed) || (prompt == "front" && reversed)) {
                    cout << ada.back() << '\n';
                    ada.pop_back();
                } else {
                    cout << ada.front() << '\n';
                    ada.pop_front();
                }
            }
        } else if (prompt == "push_back" || prompt == "toFront") {
            cin >> element;
            if ((prompt == "push_back" && !reversed) || (prompt == "toFront" && reversed)) {
                ada.push_back(element);
            } else {
                ada.push_front(element);
            }
        } else {
            reversed = !reversed;
        }
    }

    return 0;
}
