class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0, mid = 0, end = nums.size() - 1;
        while(start <= end)
        {
            switch(nums[start])
            {
                case 0 :
                    swap(nums[start++],nums[mid++]);
                    break;
                case 1 :
                    start++;
                    break;
                case 2 :
                    swap(nums[start],nums[end--]);
                    break;
            }
        }
    }
};
