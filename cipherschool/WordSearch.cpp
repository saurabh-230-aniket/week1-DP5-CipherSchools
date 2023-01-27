class Solution {
public:
    bool dfs(int i,int j,int count,vector<vector<char>>& board,string word)
    {
        if(word.length()==count) return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[count])
            return false;
        
        
        
        char temp = board[i][j];                    // curr char
        board[i][j] = ' ';                          // mark as visited
        
        
        // up , down , left , right 
        bool ans = dfs(i-1,j,count+1,board,word) || 
                   dfs(i+1,j,count+1,board,word) ||
                   dfs(i,j-1,count+1,board,word) ||
                   dfs(i,j+1,count+1,board,word);
        
        board[i][j] = temp;                         // make board as it is for the upcoming calls
        return ans;
    }
    
    bool exist(vector<vector<char>>& board, string word) 
    {
        int n = board.size();                   // rows
        int m = board[0].size();                // cols
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0] && dfs(i,j,0,board,word))
                {
                    return true;
                }
            }
        }
        
        return false;
    }
};