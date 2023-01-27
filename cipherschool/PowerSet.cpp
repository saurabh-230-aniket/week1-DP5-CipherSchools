class Solution {
public:
    void subset(vector<int>& arr,int i,vector<int> t,vector<vector<int>> &fin){
        if(i==arr.size())
        {
            fin.push_back(t);
            return;
        }
       
        //including current element
        t.push_back(arr[i]);
        subset(arr,i+1,t,fin);
        //not including current element
        t.pop_back();
         subset(arr,i+1,t,fin);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> t;
        int sz=0;
        vector<vector<int>> ans;
        subset(nums,0,t,ans);
        return ans;
    }
};