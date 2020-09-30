#include<iostream>
using namespace std;
int main(){
    int n,d;
    cin>>n;
    /*int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>d;
    for(int i=0;i<n;i++){
        if(i!=d-1){
            cout<<a[i]<<" ";
        }
    }*/
    int *a = (int *)calloc(sizeof(int),n);
    if(a==NULL){
        cout<<"Lot of memory";
        exit(0);
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>d;
    for(int i=0;i<n;i++){
        if(i!=d-1){
            cout<<a[i]<<" ";
        }
    }

}