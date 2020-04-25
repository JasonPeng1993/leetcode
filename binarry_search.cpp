#include "leetcode.h"
int binarry_search(int a[], int n, int key)
{
    
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int mid = (start + end) / 2;
        /* code */
        if(a[mid] == key)
        {
            return mid;
        }
        if(a[mid] > key)
        {
            end = mid;
        }else
        {
            /* code */
            start = mid;
        }
        
    }
    return -1;
}