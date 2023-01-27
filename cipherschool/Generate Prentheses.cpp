#include<bits/stdc++.h>
class Solution {
public:
    void rec(int l,int r,int n,string s,int i,vector<string>& res){
        if(i==2*n){
            res.push_back(s);
            return;
        }
        if(l==r){
            rec(l+1,r,n,s+'(',i+1,res);
        }
        else if(l>r){
            if(l==n){
                rec(l,r+1,n,s+')',i+1,res);
            }
            else{
                rec(l+1,r,n,s+'(',i+1,res);
                // s[i]=')';
                rec(l,r+1,n,s+')',i+1,res);
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> res;
        rec(0,0,n,s,0,res);
        return res;
    }
};