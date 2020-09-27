#include<iostream>
using namespace std;
#define MAX 100
class Queue{
    int front;
    int rear;
    int l;
    public:
        int a[MAX];

    Queue(){
        rear=-1;
        front=-1;
        l=0;

    }
    void enqueue(int x){    
        if(!isFull()){
            a[++rear]=x;
            l++;
        }
    }

    int dequeue(){
        if(!isEmpty()) {
            int x = a[front];
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
    q.enqueue(1);
    q.enqueue(2);
    q.print();
    q.dequeue();
    q.enqueue(3);
    q.print();
    q.dequeue();
    q.enqueue(4);
    q.enqueue(5);
    q.print();
}