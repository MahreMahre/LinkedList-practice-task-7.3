#include <iostream>
#include<string>
#ifndef student_H
#define student_H

using namespace std;

class stu{


public:

	string Name, a[5];
	int regNo[5];
	int sem[5];
	float cgpa[5];
	stu *link;
	stu *head_ptr = NULL;


	void InsertNode();
	void inform();

	void check1();

	void check2();




};
int main(){


	stu st;
	st.InsertNode();
	st.inform();
	st.check1();
	st.check2();
}
#endif
