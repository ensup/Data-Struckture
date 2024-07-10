#include <stdio.h>
int main(void){
    int arr[10];
    int read_count = 0,read_data,i;
    while(1){
        printf("자연수 입력: ");
        scanf("%d",&read_data);
        if(read_data<1)
            break;

        arr[read_count++]=read_data;
    }
    for(int i=0;i<read_count;i++)
        printf("%d ",arr[i]);

    return 0;
}