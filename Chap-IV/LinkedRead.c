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

    //������ �Է�
    while(1) {
        printf("�ڿ��� �Է�: ");
        scanf("%d",&read_data);
        if(read_data<1)
            break;

        //����� �߰�����
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

    //-���-
    puts("�Է¹��� ������ ���");
    if(head == NULL)
        puts("����� �ڿ����� �������� ����");
    else {
        cur = head;
        printf("%d ",cur->data);

        while (cur->next != NULL) {
            cur = cur->next;
            printf("%d ",cur->data);
        }
    }
    printf("\n\n");

    //�޸� ����
    if(head == NULL)
        return 0;
    else {
        Node * delnode = head;
        Node * DelNextNode=head->next;

        printf("%d��(��) �����մϴ�. \n",head->data);
        free(delnode);

        while (DelNextNode != NULL) {
            delnode = DelNextNode;
            DelNextNode = DelNextNode->next;

            printf("%d��(��) �����մϴ�. \n",delnode->data);
            free(delnode);
        }
    }

    return 0;
}