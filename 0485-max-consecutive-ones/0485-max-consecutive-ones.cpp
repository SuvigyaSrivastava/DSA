class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
  int count = 0 , num=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else
            count = 0;
            if(count>num)
            num=count;
        }
        return num;
    }
};