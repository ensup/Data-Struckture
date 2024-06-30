#include <stdio.h>
int Lsearch(int arr[], int len, int target){
	for(int i=0;i<len;i++)
		if(arr[i]==target)
			return i; //찾은 값의 인덱스값 반환
	return -1; //탐색 실패시
}
int main(){
	int arr[]={1,3,5,7,9};
	int idx;

	idx=Lsearch(arr,sizeof(arr)/sizeof(int),9);
	if(idx==-1)
		puts("Search failed!");
	else
		printf("Target index: %d\n",idx);

	idx=Lsearch(arr,sizeof(arr)/sizeof(int),8);
	if(idx==-1)
		puts("Search failed!");
	else
		printf("Target index: %d\n",idx);
	return 0;
}
