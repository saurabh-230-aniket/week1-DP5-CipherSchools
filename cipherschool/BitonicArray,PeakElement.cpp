class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int l=0;int h=arr.size()-1;
        if(arr.size()==1)
            return 0;
        while(l<=h){
            int m=(l+h)/2;
            if(m==0 and arr[m]>arr[m+1])
                return m;
            if(m==arr.size()-1 and arr[m-1]<arr[m])
                return m;
            if(arr[m]>arr[m+1] and arr[m]>arr[m-1])
                return m;
            if(arr[m+1]>=arr[m])
                l=m+1;
            else if(arr[m-1]>=arr[m])
                h=m-1;
        }
        return -1;
    }
};