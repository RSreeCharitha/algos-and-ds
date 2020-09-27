#include<iostream>
#include <queue> 
#define MAX 100
using namespace std;

class Tree{
    public:
    int data;
    Tree *left;
    Tree *right;
    Tree* head;
    Tree(){
        head=NULL;
    }
    Tree* create(){
        Tree *p, *t;
        

    }

    void preorder(Tree* t){

    }

    void inorder(Tree* t){
        
    }

    void postorder(Tree* t){
        
    }

    void levelorder(Tree* t){

    }

    void height(Tree* t){

    }

};

class Queue{
    int front;
    int rear;
    int l;
    public:
        Tree* a[MAX];

    Queue(){
        rear=-1;
        front=-1;
        l=0;

    }
    void enqueue(Tree* x){    
        if(!isFull()){
            a[++rear]=x;
            l++;
        }
    }

    Tree* dequeue(){
        if(!isEmpty()) {
            Tree* x = a[front];
            front++;
            l--;
            return x;
        }
    }

    int isEmpty(){
        if(front>rear){
            return 1;
        }
        return 0;
    }

    int isFull(){
        if(rear==MAX-1){
            return 1;
        }
        return 0;
    }

    void print(){
        cout<<"Printing: ";
        for(int i=front+1;i<=rear;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q;
    Tree t;
    int x;
    cout<<"Enter root value:";
    cin>>x;
    
    
}