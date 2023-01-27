static bool cmp(pair<int,int>&p1,pair<int,int>&p2)
    {
        return p1.second<p2.second;
    }
    
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v1;
        vector<pair<int,int>>v2;
        
        unordered_map<int,int>mp;
        
        for(auto i:nums)
            mp[i]++;
        
        for(auto i:mp)
        {
            v2.push_back(i);
        }
        sort(v2.begin(),v2.end(),cmp);
        for(int i=0;i<k;i++)
        {
            v1.push_back(v2.first);
        }
            
            
        return v1;
    }