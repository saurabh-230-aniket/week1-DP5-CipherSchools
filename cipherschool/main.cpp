class Solution {
public:
    //first and last occurrence of an element
    int start(vector<int> arr,int t){
        int l=0;
        int r=arr.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(arr[m]==t){
                if(m==0)
                    return m;
                else if(arr[m-1]!=t)
                    return m;
                else if(arr[m-1]==t)
                    r=m-1;
            }
            else if(arr[m]<t)
            l=m+1;
            else 
            r=m-1;
        }
        return -1;
    }
    int end(vector<int> arr,int t){
        int n=arr.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int m=(l+r)/2;
            if(arr[m]==t){
                if(m==n-1)
                    return m;
                else if(arr[m+1]!=t)
                    return m;
                else if(arr[m+1]==t)
                    l=m+1;
            }
            else if(arr[m]<t)
            l=m+1;
            else 
            r=m-1;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=start(nums,target);
        int b=end(nums,target);
        
        vector<int> arr(2);
        arr[0]=a;
        arr[1]=b;
        
        return arr;
    }
};