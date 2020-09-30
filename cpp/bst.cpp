#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
};

class bst{
    public:
    Node *root=NULL;

    Node* search(int k){
        if(root==NULL)
        return NULL;
        Node *t=root;
        while(t!=NULL){
            if(k==t->data){
            return t;}
            if(k>t->data)
            t=t->right;
            if(k<t->data) 
            t=t->left;
        }
        return NULL;
    }

    void insert(int key){
        Node *p, *r;
        if(root==NULL){
            p = (Node *)malloc(sizeof(Node));
            p->data=key;
            p->left=p->right=NULL;
            root=p;
            return;
        }
        Node* t=root;
        while(t!=NULL){
            r=t;
            if(key==t->data){
                cout<<"found duplicate"<<endl;
            return;
            }
            if(key>t->data){
                t=t->right;
            }
            else
                t=t->left;
        }
        p = (Node *)malloc(sizeof(Node));
        p->data=key;
        p->left=p->right=NULL;
        if(key>r->data)
            r->right=p;
        else{
            r->left=p;
        }
        
    }
    void inorder(){
        cout<<"Printing inorder: ";
        inorder(root);
    }

    void inorder(Node* p){
        if(p){
            inorder(p->left);
            cout<<p->data<<" ";
            inorder(p->right);
        }
    }
};

int main(){
    bst t;
    t.insert(1);
    t.insert(3);
    t.insert(4);
    t.insert(5);
    t.insert(6);
    t.insert(7);
    t.insert(8);
    t.insert(3);
    t.insert(2);
    t.inorder();
    Node *x = t.search(21);
    if(x){
        cout<<endl<<"Found: "<<x->data;
    }
    else
    cout<<"\nNot found";
}