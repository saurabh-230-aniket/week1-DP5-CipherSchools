class Solution {
public:
    void allcomb(string t,string dig,int i,unordered_map<char,vector<char>> dm,vector<string>& ans){
        if(i==dig.size()){
            ans.push_back(t);
            return;
        }
        for(int j=0;j<dm[dig[i]].size();j++){
            allcomb(t+dm[dig[i]][j],dig,i+1,dm,ans);
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,vector<char>> dm;

        dm['2']={'a','b','c'};
        dm['3']={'d','e','f'};
        dm['4']={'g','h','i'};
        dm['5']={'j','k','l'};
        dm['6']={'m','n','o'};
        dm['7']={'p','q','r','s'};
        dm['8']={'t','u','v'};
        dm['9']={'w','x','y','z'};
        
        vector<string> a;
        if(digits=="")
            return a;
        allcomb("",digits,0,dm,a);
        
        return a;
        
    }
};