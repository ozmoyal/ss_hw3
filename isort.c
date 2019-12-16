#include <stdio.h>
#include "isort.h"
int sort_arr[size] = {0};

void shift_element(int* arr, int i) {
    int j = 0;
    int k = i;
    int *p = (int *)(&sort_arr + 1) -1; // last place in the array
    int key = *(arr+i);
    //("*p = %d\n",*p);
    if (arr+i > p+1)
    {
        printf("out of boundries\n");
        return;
    }

    while(j<=i)
    {
        *(arr + k) = *(arr +k -1);
        //printf("arr[i] = %d ",*(arr+k-1));
        //*(arr + 1) = *(arr)
        k--;
        j++;
    }
    *arr= key;
}

void insertion_sort(int* arr , int len) {
    int key , i = 1 , j;
    while(i<len)
    {

    }
    shift_element(arr+i,i);
}

int main() {
    int *t = &sort_arr[5];
    for (int i = 0; i < size; i++)
    {
        sort_arr[i] = i;
        printf("%d,",sort_arr[i]);
    }
    printf("\n");
    shift_element(t,2);
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",sort_arr[i]);
    }
    return 0;
}