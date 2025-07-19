#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> sumFrequency;
    sumFrequency[0] = 1;  // base case: a sum of 0 occurs once
    int currentSum = 0;
    int count = 0;

    for (int num : nums) {
        currentSum += num;
        int remaining = currentSum - k;

        if (sumFrequency.find(remaining) != sumFrequency.end()) {
            count += sumFrequency[remaining];
        }

        sumFrequency[currentSum]++;
    }

    return count;
}
