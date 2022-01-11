#include "student.h"

void stu::inform(){

	cout << "Enter The Reg NO " << endl;
	for (int i = 0; i < 5; i++) {

		cin >> regNo[i];
	}

	cout << "Enter The cgpa" << endl;
	for (int i = 0; i < 5; i++) {

		cin >> cgpa[i];
	}


	cout << "Enter The semester" << endl;
	for (int i = 0; i < 5; i++) {

		cin >> sem[i];
	}

}