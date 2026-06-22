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

struct node* deleteatfirst(struct node*head){
    struct node*ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node* deleteatindex(struct node*head, int index){
    struct node*ptr = head;
    struct node*p = head ->next;
    for(int i=0; i<index-1; i++){
        ptr = ptr->next;
        p = p->next;
    }   
    ptr->next = p->next;
    free(p);
    return head;
}

struct node * deleteatlast(struct node*head){
    struct node*ptr = head;
    struct node*p = head->next;
    while(p->next!=NULL){
        ptr = ptr->next;
        p = p->next;
    }
    ptr->next = NULL;
    free(p);
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

    printf("Linked list before deletion\n");
    linkedlisttraversal(head);
    head = deleteatfirst(head);
    printf("Linked list after deletion\n"); 
    linkedlisttraversal(head);
    head = deleteatindex(head,3);
    printf("Linked list after deletion at index 3\n");
    linkedlisttraversal(head);
    head = deleteatlast(head);
    printf("Linked list after deletion at last\n");
    linkedlisttraversal(head);
    return 0;
}