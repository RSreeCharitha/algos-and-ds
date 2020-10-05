#include<iostream>
using namespace std;

void change(int a[],int l){
    for(int i=0;i<l;i++)
        a[i]++;
}

int main(){
    int a[]={1,2,3,4};
    change(a,4);
    for(int i=0;i<4;i++)
        cout<<a[i]<<endl;


}