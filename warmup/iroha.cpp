#include <iostream>
#include <string>
using namespace std;

int main(){
    string code {};
    int symbol {0};

    cin >> code;

    for(int i = 1; i<code.length(); i++){
        if(code[i] == '|'){
            cout << symbol << ' ';
            symbol = 0;
        }else{
            symbol++;
        }
    }

    return 0;
}
