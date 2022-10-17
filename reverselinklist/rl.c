#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int data;
    node* next;
}node;
void create(node** head){
    printf("Entter a numver of nodes:");
    int n;
    scanf("%d",&n);
    node* temp=NULL;
    if(*head==NULL){
        *head=(node*)malloc(sizeof(node));
        scanf("%d",&(*head)->data);
        (*head)->next=NULL;
        temp=*head;
    }
    for(int i=0;i<n-1;i++){
        temp->next=(node*)malloc(sizeof(node));
        scanf("%d",temp->next->data);
    }
}
int main(){
    node* head=NULL;
    create(head);

}
