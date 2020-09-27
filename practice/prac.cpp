#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin, s); 
	
	int sp=s.length();
	int ep=sp;
	int l =sp;
	while(l>0){
		
		if(s[l]==' '){
			sp=l+1;
			for(int j=sp;j<ep;j++){
				cout<<s[j];
			}
			ep=sp;
			cout<<" ";
		}		
		
		l--;
	}
	sp=0;
	for(int j=sp;j<ep-1;j++){
				cout<<s[j];
			}
}
