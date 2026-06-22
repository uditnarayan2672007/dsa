#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};

void linkedlisttraversal(struct node*ptr){
    //struct node*ptr = (struct node*)malloc(sizeof(struct node));
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* insertatfirst(struct node*head , int data){
    struct node*ptr =(struct node*)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct node* insertatindex(struct node*head , int data , int index){
    struct node*ptr =(struct node*)malloc(sizeof(struct node));
    struct node*p = head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node* insertatend(struct node*head, int data){
    struct node*ptr =(struct node*)malloc(sizeof(struct node));
    struct node*p = head;
    while(p->next!=NULL){
        p=p->next;
    }

    ptr->data = data;
    p->next = ptr;                  
    ptr->next = NULL;
    return head;    
}

struct node* insertafternode(struct node*head , struct node* prevNode, int data){
    struct node*ptr =(struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
    
}
int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth =(struct node*)malloc(sizeof(struct node));

    head->data =7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data=22;
    third->next = fourth;
    fourth->data = 5;
    fourth->next = NULL;

    //linkedlisttraversal(head);
    printf("linked list before changing : \n");
    head = insertatfirst(head,56);
    printf("linked list after changing : \n");
    insertatindex(head,45,2);
    linkedlisttraversal(head);
    return 0 ;
}

