#pragma once

#include <string>
#include "degree.h"

using namespace std;

class Student {

	string  studentID;
	string first_name;
	string last_name;
	string email;
	int age;
	int numDaysTocompleteCourse[3];
	DegreeProgram degree;

public:

	Student(string student_id, string firstName, string lastName, string Email, int Age, int numDays[], DegreeProgram Degree);

	// getter/accesser method for StudentID
	string getStudentID();
	//setter/mutater method
	void setStudentID(string student_id);
	string getFirstName();
	void setFirstName(string firstName);
	string getLastName();
	void setLastName(string lastName);
	string getEmail();
	void setEmail(string Email);
	int getAge();
	void setAge(int Age);
	//string getDegreeString();
	DegreeProgram getDegree();
	void setDegree(DegreeProgram Degree);
	int* getNumDaysTocompleteCourse();
	void setNumDaysTocompleteCourse(int numDays[]);
	void print();
};
