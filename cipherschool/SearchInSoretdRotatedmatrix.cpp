class Solution {
public:
    int bs(vector<int>&arr,int t,int lt,int rt){
        int l=lt;
        int h=rt;
        while(l<=h){
            int m=l+(h-l)/2;
            if(arr[m]==t)
            return m;
            else if(arr[m]>t)
            h=m-1;
            else
            l=m+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int p;
        while(l<=h){
            int m=l+(h-l)/2;
            cout<<"at m="<<m<<endl;
            if(nums[m]>=nums[0])
            l=m+1;
            else if(nums[m]<nums[0]){
                if(nums[m]<nums[m-1]){
                    p=m;
                    break;
                }
                else
                h=m-1;
            }
        }
        int a=bs(nums,target,0,p-1);
        int b=bs(nums,target,p,nums.size()-1);
        if(a!=-1)
        return a;
        else if(b!=-1)
        return b;
        else
        return -1;
    }
};