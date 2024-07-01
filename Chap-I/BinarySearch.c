#include <stdio.h>
int BSearch(int arr[], int len, int target){
    int first = 0;
    int last = len-1;
    int mid;

    while(first <= last){
        mid=(first+last)/2;
        if(target==arr[mid])
            return mid; //Search Success => return index
        else
            if(target<arr[mid])
                last=mid-1; //Search for numbers less than mid
            else
                first=mid+1; //Search for numbers larger than mid
    }
    return -1; //Search failed
}
int main(){
    int arr[]={1,3,5,7,9};
    int idx;
    idx=BSearch(arr, 5, 5);
    if(idx==-1)
        puts("Search failed");
    else
        printf("Target index: %d\n",idx);
    idx=BSearch(arr, 5, 6);
    if(idx==-1)
        puts("Search failed");
    else
        printf("Target index: %d\n",idx);

    return 0;
}

