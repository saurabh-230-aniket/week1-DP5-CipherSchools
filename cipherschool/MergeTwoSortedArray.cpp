/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
//function to merge two sorted arrays
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)
            return;
        if(m==0)
        {
            int i=0;
            while(i<n){
                nums1[i]=nums2[i];
                i++;
            }
            return;
        }
        int i=m-1;int j=n-1;
        int k=m+n-1;
        while(i>=0 and j>=0){
            if(nums1[i]==nums2[j]){
                nums1[k--]=nums1[i];
                nums1[k--]=nums1[i];
                i--;
                j--;
            }
            else if(nums1[i]<nums2[j]){
                nums1[k--]=nums2[j];
                j--;
            }
            else{
                nums1[k--]=nums1[i];
                i--;
            }
        }
        while(i>=0){
            nums1[k--]=nums1[i];
            i--;
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
}
