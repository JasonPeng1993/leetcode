#include "leetcode.h"

void SolutionMaintan::wiggleSort(vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; ++i)
    {
        if(i%2 == 0){
            if(nums[i] < nums[i+1])
                swap(nums[i], nums[i + 1]);
        }else{
            if(nums[i] > nums[i+1]){
                swap(nums[i], nums[i + 1]);
            }
        }
    }
}

void SolutionMaintan::swap(int& a, int& b){
    int tem;
    tem = a;
    a = b;
    b = tem;
}
