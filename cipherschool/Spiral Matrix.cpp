class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rw=matrix.size();
        int cl=matrix[0].size();

        vector<int> ans(rw*cl);
        int t=0;
        int b=rw-1;
        int l=0;
        int r=cl-1;
        int k=0;
        while(t<=b and l<=r){
            //left -> right
            for(int i=l;i<=r;i++){
                ans[k++]=matrix[t][i];
                cout<<matrix[t][i]<<" ";
            }
            t++;
            if(t>b)
            break;
            //top -> bottom
            for(int i=t;i<=b;i++)
            {
                ans[k++]=matrix[i][r];
                cout<<matrix[i][r]<<" ";
            }
            r--;
            if(r<l)
            break;
            //left -> right
            for(int i=r;i>=l;i--)
            {
                cout<<matrix[b][i]<<" ";
                ans[k++]=matrix[b][i];
            }
            b--;
            if(b<t)
            break;
            //bottom -> top
            for(int i=b;i>=t;i--)
            {
                cout<<matrix[i][l]<<" ";
                ans[k++]=matrix[i][l];
            }
            l++;
            
        }
        return ans;

    }
};