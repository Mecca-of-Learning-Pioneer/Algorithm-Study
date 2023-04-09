#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;  

int main(void) {
	
	double sum = 0.0;
	double total = 0.0;
	
	string name = "";
	double gpa = 0.0;
	char grade[3] = {0, };
	double credit = 0.0;
	double final = 0.0;
	
	for(int i = 0; i < 20; i++) {
		cin >> name >> credit >> grade;
		
		if (grade[0] == 'P') 
			continue;
		
		
		switch(grade[0]) {
			case 'F':
				gpa = 0.0;
				break;
			case 'A':
				gpa = 4.0;
				break;
			case 'B':
				gpa = 3.0;
				break;
			case 'C':
				gpa = 2.0;
				break;
			case 'D':
				gpa = 1.0;
				break;
			default:
				break;
		}
		
		if (grade[1] == '+') {
			gpa += 0.5;
		}
		
		sum += (credit * gpa);
		total += credit;
	}

	final = sum / total;
	
	cout << final;
	
}
