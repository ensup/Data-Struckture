#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int data;
    struct _node *next;
}Node;

int main(){
    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL;

    Node * newNode = NULL;
    int read_data;

    //데이터 입력
    while(1) {
        printf("자연수 입력: ");
        scanf("%d",&read_data);
        if(read_data<1)
            break;

        //노드의 추가과정
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = read_data;
        newNode->next = NULL;

        if(head==NULL)
            head = newNode;
        else
            tail->next = newNode;
        tail = newNode;
    }
    printf("\n");

    //-출력-
    puts("입력받은 데이터 출력");
    if(head == NULL)
        puts("저장된 자연수가 존재하지 않음");
    else {
        cur = head;
        printf("%d ",cur->data);

        while (cur->next != NULL) {
            cur = cur->next;
            printf("%d ",cur->data);
        }
    }
    printf("\n\n");

    //메모리 해제
    if(head == NULL)
        return 0;
    else {
        Node * delnode = head;
        Node * DelNextNode=head->next;

        printf("%d을(를) 삭제합니다. \n",head->data);
        free(delnode);

        while (DelNextNode != NULL) {
            delnode = DelNextNode;
            DelNextNode = DelNextNode->next;

            printf("%d을(를) 삭제합니다. \n",delnode->data);
            free(delnode);
        }
    }

    return 0;
}