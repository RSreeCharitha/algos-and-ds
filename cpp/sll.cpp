#include<iostream>
using namespace std;
class sll{
    
    int data;
    sll *next;
    sll *head;
    public:
    sll(){
        head=NULL;
    }
    
    sll* create(int x){
        sll* temp = (sll*)malloc(sizeof(sll));
        temp->data = x;
        temp->next=NULL;
        return temp;
    }

    void insend(int x){
        sll *t = create(x);
        if(head==NULL){
            head=t;
        }
        else{
            sll* p = head;
            while(p->next!=NULL){
                p=p->next;
            }
            p->next = t;
        }
    }

    void print(){
        sll *p = head;
        while(p->next!=NULL){
            cout<<p->data<<" -> ";
            p=p->next;
        }
        cout<<p->data<<"\n";

    }
};

int main(){
    sll l1;
    l1.insend(1);
    l1.insend(2);
    l1.insend(3);
    l1.print();
}