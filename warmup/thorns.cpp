#include <iostream>
using namespace std;

int main(){
    int testcases;
    int size;
    string path;
    int pos = 0;
    int coins = 0;

    char next_move, next_next_move;

    cin >> testcases;

    for(int i = 0; i<testcases; i++){
        cin >> size;
        cin >> ws;
        getline(cin, path);
        coins = 0;
        pos = 0;

        while(pos < size){
            char tile = path[pos];

            if(tile == '@'){
                coins++;
            }else if(tile == '*'){
                if(pos+1 > size){
                    break;
                }else if(path[pos+1] == '*'){
                    break;
                }
            }

            pos++;
        }   
        
        cout << coins << '\n';
    }

    return 0;
}
