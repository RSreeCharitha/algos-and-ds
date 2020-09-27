#include<stdio.h>
#include<stdlib.h>
int len=0;
struct node{
    int data;
    struct node* left;
    struct node* right;
}*head=NULL,*tail=NULL;

struct node * createnode(int x){
    struct node *l = (struct node*) malloc(sizeof(struct node));
    l->data=x;
    l->left=NULL;
    l->right=NULL;
    return l;
}

void insbeg(int x){
    struct node *link = createnode(x);
    if (head==NULL){
        head=link;
        tail=link;
    }
    else{
        link->right=head;
        head->left=link;
        head=link;
    }
    len++;
}

void append(int x){
    struct node *link = createnode(x);
    if(len==0){
        head=link;
        tail=link;
    }
    else{
        tail->right = link;
        link->left=tail;
        tail=tail->right;
    }
    len++;
}
/*
void deleteend(){
    if(head!=NULL){
        struct node *p = head;
        if(len==1){
            head=NULL;
            free(p);
        }
        else{
            struct node *q = head;
            while(p->next->next!=NULL){
                p=p->next;
                q=q->next;
            }
            q=q->next;
            //printf("%d,%d\n",p->data,q->data);
            p->next=NULL;
            free(q);
        }
        len--;
    }
}

void revlist(){
    
}

void delbeg(){
    if (head!=NULL || len!=0){
        struct node *p = head;
        if (len==1){
            head=NULL;
            free(p);
        }
        else{
            struct node *q = head;
            q=q->next;
            head=q;
            free(p);
        }
        len--;
    }
}
*/
void revlist(){
    struct node *p = head;
    struct node *q = tail;
    int i=0;
    int j=len-1;
    while(i<j){
        int temp = p->data;
        p->data=q->data;
        q->data=temp;
        p=p->right;
        q=q->left;
        i++;
        j--;
    }
}

void printlist(){
    struct node *p = head;
    while(p->right!=NULL){
        printf("%d -> ",p->data);
        p=p->right;
    }
    printf("%d\n",p->data);
}

void printrev(){
    struct node *p = tail;
    while(p->left!=NULL){
        printf("%d -> ",p->data);
        p=p->left;
    }
    printf("%d\n",p->data);
}

void main(){
    append(19);
    append(12);
    insbeg(8);
    insbeg(6);
    insbeg(1);
    /*append(4);
    append(9);
    printlist();
    delbeg();
    printlist();
    printf("%d\n",len);
    deleteend();*/
    printlist();
    revlist();
    printlist();

}