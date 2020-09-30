#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack <char> s;
	string a="aab";
	char top=a[0];
	int count=a.length();
	for(int i=0;i<a.length();i++){
		if(a[i]==top){
			s.push(a[i]);
		}
		else{
			cout<<a[i]<<endl;
			int l = s.size();
			cout<<l;
			if (l!=1) count++;
			while(!s.empty()) s.pop();
		}
	}
	cout<<count;
}