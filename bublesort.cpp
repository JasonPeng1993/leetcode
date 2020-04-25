#include "leetcode.h"
void bublesort(int a[], int n){
    int tem;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n-1 - i; ++j){
            if(a[j]>a[j+1])
            {
                tem = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tem;
            }
        }
    }
}