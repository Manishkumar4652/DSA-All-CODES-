#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int uniqueXorTriplets(vector<int>& nums) {
    int n = nums.size();

    // Store all pair XORs
    unordered_set<int> s1;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            s1.insert(nums[i] ^ nums[j]);
        }
    }

    // Find all triplet XORs
    unordered_set<int> s2;

    for (int pairXor : s1) {
        for (int num : nums) {
            s2.insert(pairXor ^ num);
        }
    }

    return s2.size();
}

int main() {

    // Test Case
    vector<int> nums = {6, 7, 8, 9};

    cout << "Array: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Number of Unique XOR Triplets = "
         << uniqueXorTriplets(nums) << endl;

    return 0;
}