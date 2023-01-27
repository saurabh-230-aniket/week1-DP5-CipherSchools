class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j>=i){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        for(int i=0;i<n;i++){
            int l=0;int h=n-1;
            while(l<=h){
                swap(matrix[i][l],matrix[i][h]);
                l++;
                h--;
            }
        }
    }
};