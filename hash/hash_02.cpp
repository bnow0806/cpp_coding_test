#include <vector>
#include <unordered_set>
#include "Header.h"
#include <iostream>

using namespace std;

int solution2(vector<int> nums)
{
    int answer = 0;
    int n = nums.size() / 2;

    unordered_set<int> set_nums(nums.begin(), nums.end());

    int m = set_nums.size();
    answer = (n > m) ? m : n;

    cout << answer << endl;

    return answer;
}

void main_solution2() {
    vector<int> nums = { 3,1,2,3 };

    solution2(nums);
}

