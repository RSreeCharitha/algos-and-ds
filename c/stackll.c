#include<stdio.h>
#include<stdlib.h>
int top=-1;
struct node{
    int data;
    struct node* next;
} *head=NULL;

int push(int x){
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->data=x;
    link->next=NULL;
    if (head==NULL){
        head=link;
    }
    else{
        link->next=head;
        head=link;
    }
    top++;
    return top;
}

void pop(){
    if (top<0){
        printf("Stack underflow");
    }
    else if (top==0){
        struct node *link=head;
        head=NULL;
        free(link);
        top--;
    }
    else{
        struct node *p=head;
        struct node *q=head;
        p=p->next;
        head=p;
        //printf("%d,%d\n",p->data,q->data);
        free(q);
        top--;
    }
}

void isEmpty(){
    if (top<0){
        printf("stack empty\n");
    }
    else{
        printf("stack not empty\n");
    }
}

void print(){
    struct node* p=head;
    while (p->next!=NULL){
        printf("%d -> ",p->data);
        p=p->next;
    }
    printf("%d\n",p->data);
}

void main(){
    isEmpty();
    int r = push(4);
    r = push(5);
    r = push(7);
    printf("%d\n",top);
    print();
    pop();
    printf("%d\n",top);
    print();
}