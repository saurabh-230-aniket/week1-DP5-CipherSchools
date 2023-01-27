class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> triplets;
        int n = nums.size();
        if(n<3)
        return {};
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(i>0 && nums[i] == nums[i-1])
            continue;
            int j = i+1,k=nums.size()-1;
            while(j<k){
                if(nums[i] + nums[j] + nums[k] > 0)
                k--;
                else if(nums[i] + nums[j] + nums[k] < 0)
                j++;
                else{
                    triplets.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j] == nums[j+1]) j++;
                    while(j<k && nums[k] == nums[k-1]) k--;
                    j++;
                    k--;
                }
            }
        }
    return triplets;
    }
};