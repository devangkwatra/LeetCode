class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0; int high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] < nums[0]) {
                if (target > nums[mid] and target <= nums[high])
                    low = mid + 1;                                      //Right Half - Sorted
                else
                    high = mid - 1;
            }
            else {
                if (target < nums[mid] and target >= nums[low])
                    high = mid - 1;                                      //Left Half - Sorted
                else
                    low = mid + 1;
            }
        }
        return -1;
    }
};
