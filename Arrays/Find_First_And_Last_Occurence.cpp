#include <iostream>
#include <vector>
using namespace std;

// Function to find first occurrence of target
int findFirstOccurrence(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return (nums[left] == target) ? left : -1;
}

// Function to find last occurrence of target
int findLastOccurrence(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left + 1) / 2;
        if (nums[mid] > target)
            right = mid - 1;
        else
            left = mid;
    }
    return (nums[left] == target) ? left : -1;
}

// Example usage
int main() {
    vector<int> nums = {1, 3, 5, 5, 5, 7, 9, 11};
    int target = 5;
    int first = findFirstOccurrence(nums, target);
    int last = findLastOccurrence(nums, target);
    if (first != -1 && last != -1)
        cout << "First occurrence: " << first << ", Last occurrence: " << last << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
