class Solution {
public:
    int binS(vector<int>& arr, int tar, int st, int end) {
        if (st > end)
            return -1;

        int mid = st + (end - st) / 2;

        if (arr[mid] == tar)
            return mid;
        else if (arr[mid] < tar)
            return binS(arr, tar, mid + 1, end);
        else
            return binS(arr, tar, st, mid - 1);
    }

    int search(vector<int>& nums, int target) {
        return binS(nums, target, 0, nums.size() - 1);
    }
};