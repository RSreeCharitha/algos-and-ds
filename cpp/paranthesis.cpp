#include<iostream>
//#include<string>
using namespace std;
#define MAX 1000

class Stack { 
	int top; 

public: 
	char a[MAX]; // Maximum size of Stack 

	Stack() { 
		top = -1; 
		} 

bool push(char x) 
{ 
	if (top >= (MAX - 1)) { 
		cout << "Stack Overflow"; 
		return false; 
	} 
	else { 
		a[++top] = x; 
		//cout << x << " pushed into stack\n"; 
		return true; 
	} 
} 

char pop() 
{ 
	if (top < 0) { 
		cout << "Stack Underflow"; 
		return 0; 
	} 
	else {
		return a[top--]; 
	} 
} 
char peek() 
{ 
	if (top < 0) { 
		cout << "Stack is Empty"; 
		return 0; 
	} 
	else { 
		return a[top]; 
	} 
} 

bool isEmpty() 
{ 
	return (top < 0); 
} 

};

int main(){
    string s;
    bool match = true;
    cin>>s;
    Stack c;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            c.push(s[i]);
            
        }
        else if(s[i]==')'){
            if(c.isEmpty()) match = false;
            c.pop();
        }
        
        
    }
    if(!c.isEmpty()) match=false;
    cout<<match;
}