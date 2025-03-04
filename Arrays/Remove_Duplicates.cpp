#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    
    int j = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[j]) {
            j++;
            nums[j] = nums[i];
        }
    }
    return j + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int newLength = removeDuplicates(nums);
    
    cout << "New length of array after removing duplicates: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
