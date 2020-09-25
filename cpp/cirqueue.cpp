#include <iostream> 
using namespace std; 
//#define MAX 100
class CirQ{
    int front;
    int rear;
    int size;

    public:
    int *a;
    
    CirQ(){
        front=rear=0;
    }
    CirQ(int l){
        a = new int[l];
    }
    void enqueue(int x){
        if((rear+1)%size==front){
            cout<<"Queue is full"<<endl;
        }
        else{
            rear = (rear+1)%size;
            a[rear]=x;
        }

    }
    void dequeue(){
        if(rear==front){
            cout<<"Queue is full"<<endl;
        }

    }
};