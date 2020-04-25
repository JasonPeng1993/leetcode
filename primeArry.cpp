#include "leetcode.h"
int SolutionPrimeArray::numPrimeArrangements(int n) {
    //求质数的个数
    int pnum = 1;
    int mod = static_cast<int>(1e9 + 7);
    if(n == 0) return 0;
    if(n == 1) return 0;
    if(n == 2) 
    {
        pnum=1;
    }else
    {
        for(int i = 3; i<= n; ++i)
        {
            int flag = 1;
            for(int j = 2; j<i; ++j)
            {
                if(i%j == 0) {
                    flag = 0;
                    break;
                }
            
            }
            if(flag) ++pnum;
        }
    }

    long long  num1 = getjiechen(pnum);
    long long num2 = getjiechen(n - pnum);

    return (num1*num2)%mod;

}

int SolutionPrimeArray::getjiechen(int n)
{
    int mod = 1e9 + 7;
    long long ret = 1;
    for(int i = 1; i<=n; ++i)
    {
        ret *=  i;
        ret %=  mod;
    }
    return ret;
}
