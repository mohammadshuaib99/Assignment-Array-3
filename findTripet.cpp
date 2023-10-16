#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countTripletsWithSum(vector<int>& nums, int x) {
    int count = 0;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == x) {
                count++;
                left++;
                right--;
            } else if (sum < x) {
                left++;
            } else {
                right--;
            }
        }
    }

    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int targetSum = 12;

    int tripletCount = countTripletsWithSum(arr, targetSum);

    cout << "The number of triplets with a sum of " << targetSum << " is: " << tripletCount << endl;

    return 0;
}


/*
output
The number of triplets with a sum of 12 is: 3
*/