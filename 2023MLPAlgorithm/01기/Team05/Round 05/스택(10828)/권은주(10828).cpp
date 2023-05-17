#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<int> stacks;

void pop_function(void) {
	if(stacks.empty()) { 
		cout << "-1" << '\n';
	}
	else {
		cout << stacks.top() << '\n';
		stacks.pop();
	}
}

void top_function(void) {
	if(stacks.empty()) {
		cout << "-1" << '\n';
	}
	else {
		cout << stacks.top() << '\n';
	}
}

void size_function(void) {
	if(stacks.empty()) {
		cout << "0" << '\n';
	}
	else {
		cout << stacks.size() << '\n';
	}
}

void empty_function(void) {
	if(stacks.empty()) {
		cout << "1" << '\n';
	} 
	else {
		cout << "0" << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	string str;
	int num;
	
	int N;
	cin >> N;
	
	
	for(int i=0; i<N; i++) {
		cin >> str;
		if(str == "push"){
			cin >> num;
			stacks.push(num);
		}
		else if(str == "pop"){
			pop_function();
		}
		else if(str == "size"){
			size_function();
		}
		else if(str == "empty"){
			empty_function();
		}
		else if(str == "top"){
			top_function();
		}	
		
	}
	
}
