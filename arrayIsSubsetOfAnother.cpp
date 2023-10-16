#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool isSubset(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> set;

    for (int num : arr2) {
        set.insert(num);
    }

    for (int num : arr1) {
        if (set.find(num) == set.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> array1 = {1, 2, 3};
    vector<int> array2 = {2, 3, 4, 1, 5};

    if (isSubset(array1, array2)) {
        cout << "Array 1 is a subset of Array 2." << endl;
    } else {
        cout << "Array 1 is not a subset of Array 2." << endl;
    }

    return 0;
}


/*
output
Array 1 is a subset of Array 2.
*/