class Solution {
public:
    int submat(int i,int j){
        if(i<3 and j<3)
        return 0;
        else if(i<3 and j>=3 and j<6)
        return 1;
        else if(i<3 and j>=6)
        return 2;
        else if(i>=3 and i<6 and j<3)
        return 3;
        else if(i>=3 and i<6 and j>=3 and j<6)
        return 4;
        else if(i>=3 and i<6 and j>=6)
        return 5;
        else if(i>=6 and j<3)
        return 6;
        else if(i>=6 and j>=3 and j<6)
        return 7;
        else
        return 8;
        // return -1;
    }
    // void print(map<char,int> mp){
    //     for(auto x:mp){
    //         cout<<x.first<<" "<<x.second<<endl;
    //     }
    // }
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<map<char,int>> row(9);
        vector<map<char,int>> col(9);
        vector<map<char,int>> sub(9);
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                // cout<<"at chr="<<board[i][j]<<endl;
                if(board[i][j]!='.')
                {
                    // cout<<"at "<<i<<":"<<j<<endl;
                    row[i][board[i][j]]++;//map at row[i]
                    // cout<<"here";
                }
            }
        }
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i]!='.')
                col[i][board[j][i]]++;
            }
        }
        
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                int matnum=submat(i,j);
                for(int i1=i;i1<i+3;i1++){
                    for(int j1=j;j1<j+3;j1++){
                        if(board[i1][j1]!='.')
                        sub[matnum][board[i1][j1]]++;
                    }
                }
                
            }
        }
        
        // for(int i=0;i<9;i++)
        // {
        //     print(sub[i]);
        //     cout<<endl;
        // }
        // cout<<"============================="<<endl;
        
        
        cout<<sub[5]['6']<<endl;
       for(int i=0;i<9;i++){
           for(int j=0;j<9;j++){
               char x=board[i][j];
               if(x=='.')
                   continue;
               cout<<row[i][x]<<" "<<col[j][x]<<" "<<sub[submat(i,j)][x]<<endl;
               if(row[i][x]>1 or col[j][x]>1 or sub[submat(i,j)][x]>1){
                   // cout<<"at "<<i<<' '<<j<<endl;
                   return false;
               }
                  
           }
       }
        
        
        
        
        return true;
    }
};