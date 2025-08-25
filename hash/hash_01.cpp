#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> counter;
    // Count each participant
    for (const auto &name : participant) {
        ++counter[name];
    }
    // Subtract for each completion
    for (const auto &name : completion) {
        --counter[name];
    }
    // Find the participant who didn't complete
    for (const auto &kv : counter) {
        if (kv.second > 0) {
            return kv.first;
        }
    }
    return ""; // Fallback (should not reach here for valid inputs)
}

int main() {
    vector<string> participant = {"leo", "kiki", "eden"};
    vector<string> completion = {"eden", "kiki"};

    cout << solution(participant, completion) << endl; // Expected output: leo
    return 0;
}

