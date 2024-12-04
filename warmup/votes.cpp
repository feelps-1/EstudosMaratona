#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int candidates, number_of_votes;
    cin >> candidates >> number_of_votes;

    vector<int> votes(number_of_votes);
    unordered_map<int, int> vote_count;

    // Read votes directly
    for (int i = 0; i < number_of_votes; i++) {
        cin >> votes[i];
    }

    int best_candidate = votes[0];  
    vote_count[best_candidate]++; 

    cout << best_candidate << '\n'; 

    for (int i = 1; i < number_of_votes; i++) {
        int current_vote = votes[i];
        vote_count[current_vote]++;

        if (vote_count[current_vote] > vote_count[best_candidate]) {
            best_candidate = current_vote;
        } else if (vote_count[current_vote] == vote_count[best_candidate]) {
            if (current_vote < best_candidate) {
                best_candidate = current_vote;
            }
        }

        cout << best_candidate << '\n';
    }

    return 0;
}
