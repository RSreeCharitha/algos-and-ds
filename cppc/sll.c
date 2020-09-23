#include<stdio.h>
#include<stdlib.h>
int len=0;
struct node{
    int data;
    struct node* next;
}*head=NULL;

struct node * createnode(int x){
    struct node *l = (struct node*) malloc(sizeof(struct node));
    l->data=x;
    l->next=NULL;
    return l;
}
void insbeg(int x){
    struct node *link = createnode(x);
    if (head==NULL){
        head=link;
    }
    else{
        link->next=head;
        head=link;
    }
    len++;
}
void append(int x){
    struct node *link = createnode(x);
    struct node *p = head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next = link;
    len++;
}
void printlist(){
    struct node *p = head;
    while(p->next!=NULL){
        printf("%d -> ",p->data);
        p=p->next;
    }
    printf("%d\n",p->data);
}
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
    if(len>1){
    struct node* pre = NULL;
    struct node* cur = head;
    struct node* nex = NULL;
    while(cur!=NULL){
        nex = cur->next;
        cur->next=pre;
        pre = cur;
        cur = nex;
    }
    head=pre;
    }
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
void inspos(int x, int pos){
    if (pos>0 && pos<len){
        struct node* p = head;
        struct node* q = head;
        struct node* link = createnode(x);
        for (int i=0;i<pos-2;i++){
            p=p->next;
        }
        q=p->next;
        printf("p=%d,q=%d\n",p->data,q->data);
        p->next=link;
        link->next=q;
    }
    else if(pos==len){
        append(x);
    }
    else if(pos==0) insbeg(x);
    else printf("Length of list is less than the given position\n");
}
void delpos(int pos){
    if(pos>0 && pos<len){
        struct node* p = head;
        struct node* q = head;
        for (int i=0;i<pos-2;i++){
            p=p->next;
        }
        q=p->next;
        printf("p=%d,q=%d\n",p->data,q->data);
        p=q->next;
        q->next=NULL;
        free(q);
    }

}

void main(){
    insbeg(8);
    insbeg(6);
    append(4);
    append(9);
    printlist();
    delbeg();

    printf("%d\n",len);
    deleteend();
    insbeg(77);
    append(12);
    inspos(3,22);
    printlist();
    delpos(3);
    printlist();
}
