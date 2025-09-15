#include <string>
#include <vector>
#include "Header.h"
#include <unordered_map>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> um;

    for (auto part : participant) {
        um[part] += 1;
    }

    for (auto comp : completion) {
        um[comp] -=1;
    }

    for (auto& u : um) {
        if (u.second > 0) {
            answer = u.first;
        }
    }

    return answer;
}

void main_solution() {
    vector<string> participant = {"mislav", "stanko", "mislav", "ana"};
    vector<string> completion = {"stanko", "ana", "mislav"};

    solution(participant, completion);
}

