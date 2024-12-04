#include <iostream>
#include <string>
using namespace std;

int main(){
    string word {};
    int counter {0};

    for(int i = 0; i < 12; i++){
        cin >> word;

        if(word.length() == i+1){
            counter++;
        }
    }

    cout << counter;

    return 0;
}
