class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size()-1;
        int even = 0;
        while(even < n){
            if(nums[even] % 2 == 0){
                even++;
            }else if(nums[n] % 2 != 0){
                n--;
            } else{
                swap(nums[even], nums[n]);
                even++;
                n--;
            }
        }

       return nums; 
    }
};