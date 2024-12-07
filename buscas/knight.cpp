#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long size;
    long long pieces;

    cin >> size >> pieces;

    int r, c;

    long long ans {size*size-pieces};

    vector<bool> a(size, false);

    vector<vector<bool>> chess(size, a);
    size--;

        for(int i = 0; i < pieces; i++){
        cin >> r >> c;

        r--;
        c--;
        


        chess[r][c] = true;


        //Placed on square (i+2,j+1)
        if(0 <= r+2 && r+2 <= size && 0 <= c+1 && c+1 <= size){
            if(!chess[r+2][c+1]){
                ans--;
            }
        }

        //Placed on square (i+1,j+2)
        if(0 <= r+1 && r+1 <= size && 0 <= c+2 && c+2 <= size){
            if(!chess[r+1][c+2]){
                ans--;
            }
        }

        //Placed on square (i−1,j+2)
        if(0 <= r-1 && r-1 <= size && 0 <= c+2 && c+2 <= size){
            if(!chess[r-1][c+2]){
                ans--;
            }
        }

        //Placed on square (i−2,j+1)
        if(0 <= r-2 && r-2 <= size && 0 <= c+1 && c+1 <= size){
            if(!chess[r-2][c+1]){
                ans--;
            }
        }

        //Placed on square (i−2,j−1)
        if(0 <= r-2 && r-2 <= size && 0 <= c-1 && c-1 <= size){
            if(!chess[r-2][c-1]){
                ans--;
            }
        }

        //Placed on square (i−1,j−2)
        if(0 <= r-1 && r-1 <= size && 0 <= c-2 && c-2 <= size){
            if(!chess[r-1][c-2]){
                ans--;
            }
        }

        //Placed on square (i+1,j−2)
        if(0 <= r+1 && r+1 <= size && 0 <= c-2 && c-2 <= size){
            if(!chess[r+1][c-2]){
                ans--;
            }
        }

        //Placed on square (i+2,j−1)
        if(0 <= r+2 && r+2 <= size && 0 <= c-1 && c-1 <= size){
            if(!chess[r+2][c-1]){
                ans--;
            }
        }
    }

    cout << ans;

    return 0;
}