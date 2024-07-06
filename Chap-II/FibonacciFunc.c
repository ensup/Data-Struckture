#include <stdio.h>

int fibo(int num){
    printf("Func call program %d \n",num);
    if(num==1)
        return 0;
    else if(num==2)
        return 1;
    else
        return fibo(num-1)+fibo(num-2);
}

int main(void){
    fibo(7);
    
    return 0;
}