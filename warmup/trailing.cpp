#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int trailing_zeros = 0;

    for (int i = 5; n / i > 0; i *= 5) {
        trailing_zeros += n / i;
    }

    cout << trailing_zeros << '\n';

    return 0;
}
