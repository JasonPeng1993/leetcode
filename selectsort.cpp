#include "leetcode.h"
void selectsort(int a[], int n){
    int tem;
    for (int i = 0; i < n;++i){
        int index = i;
        for (int j = i; j < n; ++j){
            if(a[j]<a[index]){
                index = j;
            }
        }
        tem = a[i];
        a[i] = a[index];
        a[index] = tem;
    }
}