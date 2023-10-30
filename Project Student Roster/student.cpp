#include <iostream>
#include "student.h"
//#include "degree.h"

Student::Student(string student_id, string firstName, string lastName, string Email, int Age, int numDays[], DegreeProgram Degree) {
	studentID = student_id;
	first_name = firstName;
	last_name = lastName;
	email = Email;
	age = Age;
	for (int i = 0; i < 3; i++) {
		numDaysTocompleteCourse[i] = numDays[i];
	}
	degree = Degree;
}

// getter/accesser method for StudentID
string Student::getStudentID() {
	return studentID;
}

//setter/mutater method
void Student::setStudentID(string student_id) {
	studentID = student_id;
}

string Student::getFirstName() {
	return first_name;
}

void Student::setFirstName(string firstName) {
	first_name = firstName;
}

string Student::getLastName() {
	return last_name;
}

void Student::setLastName(string lastName) {
	last_name = lastName;
}

string Student::getEmail() {
	return email;
}

void Student::setEmail(string Email) {
	email = Email;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int Age) {
	age = Age;
}

DegreeProgram Student::getDegree() {
	return degree;
}


void Student::setDegree(DegreeProgram Degree) {
	degree = Degree;
}

int* Student::getNumDaysTocompleteCourse() {
	return numDaysTocompleteCourse;
}

void Student::setNumDaysTocompleteCourse(int numDays[]) {
	for (int i = 0; i < 3; i++) {
		numDaysTocompleteCourse[i] = numDays[i];
	}
}


void Student::print() {

	cout << "studentID: " << studentID << endl
		<< "FirstName: " << first_name << endl
		<< "LastName: " << last_name << endl
		<< "Email: " << email << endl
		<< "Age: " << age << endl
		<< "numDaysTocompleteCourse: " << numDaysTocompleteCourse[0] << ", " << numDaysTocompleteCourse[1] << ", " << numDaysTocompleteCourse[2];

	string strDegree{ "" };
	if (DegreeProgram::NETWORK == degree) {
		strDegree = "NETWORK";
	}
	else if (DegreeProgram::SECURITY == degree) {
		strDegree = "SECURITY";
	}
	else if (DegreeProgram::SOFTWARE == degree) {
		strDegree = "SOFTWARE";
	}
	cout << " Degree: " << strDegree << endl;
}