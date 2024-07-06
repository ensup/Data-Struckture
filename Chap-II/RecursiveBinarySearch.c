#include <stdio.h>

int BSearchRec(int arr[], int first, int last, int target){
    int mid;
    if(first>last)
        return -1;
    mid=(first+last)/2;
    if(arr[mid]==target)
        return mid;
    else if(target<arr[mid])
        return BSearchRec(arr, first, mid-1, target);
    else
        return BSearchRec(arr, mid+1, last, target);
}

int main(void){
    int arr[]={1,3,5,7,9};
    int idx;
    
    idx=BSearchRec(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
    if(idx==-1)
        puts("Search failed");
    else
        printf("Target index: %d\n",idx);
    idx=BSearchRec(arr, 0, sizeof(arr)/sizeof(int)-1, 8);
    if(idx==-1)
        puts("Search failed");
    else
        printf("Target index: %d\n",idx);

    return 0;
}