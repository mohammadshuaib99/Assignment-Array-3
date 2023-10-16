#include <iostream>
#include <vector>

using namespace std;

int findFirstNonRepeating(vector<int>& nums) {
    vector<int> count(nums.size(), 0);

    // Count the occurrences of each element
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums.size(); j++) {
            if (i != j && nums[i] == nums[j]) {
                count[i]++;
            }
        }
    }

    // Find the first element with count 0 (non-repeating)
    for (int i = 0; i < nums.size(); i++) {
        if (count[i] == 0) {
            return nums[i];
        }
    }

    return -1; // No non-repeating element found
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1, 4, 3};

    int firstNonRepeating = findFirstNonRepeating(arr);

    if (firstNonRepeating != -1) {
        cout << "The first non-repeating element is: " << firstNonRepeating << endl;
    } else {
        cout << "There are no non-repeating elements in the array." << endl;
    }

    return 0;
}
