#include "leetcode.h"

void insertsort(int a[], int n){
    int tem;
    for (int i = 1; i < n; ++i){
        for (int j = i; j > 0; --j){
            if(a[j]<a[j-1]){
                tem = a[j];
                a[j] = a[j-1];
                a[j-1] = tem;
            }
        }
    }
}