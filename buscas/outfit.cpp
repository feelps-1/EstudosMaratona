#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int events;
    string event;
    string cloth;

    vector<string> wardrobe;

    bool found = false;

    cin >> events;

    for(int i = 0; i < events; i++){
        cin >> event;

        if(event == "put"){
            cin >> cloth;
            wardrobe.push_back(cloth);
            if(cloth == "snowcoat"){
                found = true;
            }
        }else if(event == "get"){
            if(wardrobe.empty()){
                cout << "empty" << '\n';
            }else{
                if(wardrobe.back() == "snowcoat"){
                found = false;
                }
                cout << wardrobe.back() << '\n';
                wardrobe.pop_back();
            }
        }else if(event == "iditarod"){
            if(found){
                vector<string> temp;

                for(auto c: wardrobe){
                    if(c != "snowcoat"){
                        temp.push_back(c);
                    }
                }

                wardrobe = temp;
                
                cout << "winner winner chicken dinner :)" << '\n'; 

                found = false;
            }else{
                cout << "oopsimcold :(" << '\n';
            }
        }
    }

    return 0;
}