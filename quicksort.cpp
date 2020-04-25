#include "leetcode.h"

void quicksort(int a[], int low, int high){
    if(low>high)
        return;

    int i = low;
    int j = high;
    int privot = a[low];
    int t;
    while (i!=j)
    {
        while (a[j] >= privot && i<j)
            j--;

        while (a[i] <= privot && i<j)
            i++;
        if(i<j){
            t = a[i];
            a[i] = a[j];
            a[j] = t;  
        }
 
    }

    a[low] = a[i];
    a[i] = privot;

    quicksort(a, low, i - 1);
    quicksort(a, i + 1, high);
}