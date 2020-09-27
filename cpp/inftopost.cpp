#include <iostream> 
using namespace std; 
#define MAX 100
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

int operand(char x){
    if ((x>='a' && x<='z') || (x>='A' && x<='Z')){
        return 1;
    }
    return 0;
}

int precedence(char x){
    if (x=='+' || x=='-')
    return 1;
    else if (x=='*' || x=='/')
    return 2;
}

int main(){
    char e[20];
    string p="";
    cout<<"Enter Infix expression: ";
    cin>>e;
    Stack s;
    int i=0;

    while(e[i]!='\0'){
        if (operand(e[i])){
            p.push_back(e[i]);
            i++;
        }
        else{ // if operand
            if(s.isEmpty()){
                s.push(e[i]);
                i++;
            }
            if(precedence(e[i])>precedence(s.peek())){
                s.push(e[i]);
                i++;
            }
            else{
                p.push_back(s.pop());
            }
            
        }
    }
    while(!s.isEmpty()){
        p.push_back(s.pop());
    }
    cout<<"Postfix Expression:"<<p;

}