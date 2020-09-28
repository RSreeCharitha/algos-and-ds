#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *right;
    Node *left;

};
class Tree{
    Node* root;
    public:
    void create(){
        Node *p, *t;
        int x;
        queue<Node*> q;
        cout<<"Root value: ";
        cin>>x;
        root = (Node*)malloc(sizeof(Node));
        root->data = x;
        root->right=root->left=NULL;
        q.push(root);

        while(!q.empty()){
            p = q.front();
            q.pop();
            cout<<"Enter left child of "<<p->data<<": ";
            cin>>x;
            if (x!=-1){
                t = (Node*)malloc(sizeof(Node));
            t->data = x;
            t->left=t->right=NULL;
            p->left=t;
            q.push(t);
            }

            cout<<"Enter right child of "<<p->data<<": ";
            cin>>x;
            if (x!=-1){
                t = (Node*)malloc(sizeof(Node));
            t->data = x;
            t->left=t->right=NULL;
            p->right=t;
            q.push(t);
        }
    }
    }
    void preorder(){
        preorder(root);
    }
     void inorder(){
        inorder(root);
    }
     void postorder(){
        postorder(root);
    }
    void preorder(Node *t){
        if(t){
            cout<<t->data<<" ";
            preorder(t->left);
            preorder(t->right);
        }
    }
    void inorder(Node *t){
        if(t){
            inorder(t->left);
            cout<<t->data<<" ";
            inorder(t->right);
        }
    }
    void postorder(Node *t){
        if(t){
            postorder(t->left);
            postorder(t->right);
            cout<<t->data<<" ";
        }
    }
    void levelorder(){
        Node *p=root;
        queue <Node*> q;
        cout<<p->data<<" ";
        q.push(p);
        while(!q.empty()){
            p=q.front();
            q.pop();
            if(p->left){
                cout<<p->left->data<<" ";
                q.push(p->left);
            }
            if(p->right){
                cout<<p->right->data<<" ";
                q.push(p->right);
            }
        }
    }
   
};

int main(){
    Tree t;
    t.create();
    cout<<"Preorder: ";
    t.preorder();
    cout<<"\nInorder: ";
    t.inorder();
    cout<<"\nLevelorder: ";
    t.levelorder();
    
}