#include <iostream>
#include "roster.h"
//#include "degree.h"

using namespace std;

void Roster::add(const string studentID, const string firstName, const string lastName,
	const string emailAddress, const int age, const int daysInCourse1, const int daysInCourse2,
	const int daysInCourse3, const DegreeProgram degreeprogram) {

	int daysInCourse[3] = { daysInCourse1 , daysInCourse2, daysInCourse3 };
	Student* student = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeprogram);
	
	lastIndex++;
	classRosterArray[lastIndex] = student;
}

void Roster::remove(string studentID) {

	bool found{ false };
	for (int i = 0; i < lastIndex; i++) {
		if (nullptr != classRosterArray[i]) {
			if (classRosterArray[i]->getStudentID() == studentID) {
				found = true;
				delete classRosterArray[i];
				classRosterArray[i] = nullptr; // Dengling pointer
			}
		}
	}

	if (false == found) {
		cout << "Error: Student was not found." << endl;
	}
}

//A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security
void Roster::printAll() {

	for (int i = 0; i < lastIndex; i++) {
		if (nullptr != classRosterArray[i]) {
			cout << classRosterArray[i]->getStudentID() << "\tFirst Name:" << classRosterArray[i]->getFirstName() << "\tLast Name:" << classRosterArray[i]->getLastName()
				<<"\tEmail: " << classRosterArray[i]->getEmail() <<"\tAge:"
				<< classRosterArray[i]->getAge() << "\tdaysInCourse: {" << classRosterArray[i]->getNumDaysTocompleteCourse()[0] << ", " << classRosterArray[i]->getNumDaysTocompleteCourse()[1]
				<< ", " << classRosterArray[i]->getNumDaysTocompleteCourse()[2] << "}\t";
			
			string strDegree{ "" };
			if (DegreeProgram::NETWORK == classRosterArray[i]->getDegree()) {
				strDegree = "NETWORK";
			}
			else if (DegreeProgram::SECURITY == classRosterArray[i]->getDegree()) {
				strDegree = "SECURITY";
			}
			else if (DegreeProgram::SOFTWARE == classRosterArray[i]->getDegree()) {
				strDegree = "SOFTWARE";
			}
			cout<<"Degree Program : " << strDegree <<endl;
		}
	}

}

void Roster::printAverageDaysInCourse(string studentID) {
	bool found{ false };
	for (int i = 0; i < lastIndex; i++) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			found = true;
			int* days = classRosterArray[i]->getNumDaysTocompleteCourse();
			int avgDays = (days[0] + days[1] + days[2]) / 3;
			cout << "Student ID: " << studentID << " Average Days In Course: " << avgDays << endl;
			break;
		}
	}

	if (false == found) {
		cout << "Error: Student was not found." << endl;
	}
}

//Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
void Roster::printInvalidEmails() {
	for (int i = 0; i < lastIndex; i++) {
		if (nullptr != classRosterArray[i]) {
			string email = classRosterArray[i]->getEmail();

			if(!(string::npos != email.find("@") &&
				string::npos != email.find(".") &&
					string::npos == email.find(" "))) {
				cout << "Invalid Email: "<<email << endl;
			}
			//else {
			//	cout << "valid Email: " << email << endl;
			//}
		}
	}
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	string strDegree{ "" };
	if (DegreeProgram::NETWORK == degreeProgram) {
		strDegree = "NETWORK";
	}
	else if (DegreeProgram::SECURITY == degreeProgram) {
		strDegree = "SECURITY";
	}
	else if (DegreeProgram::SOFTWARE == degreeProgram) {
		strDegree = "SOFTWARE";
	}

	cout << " Students in " << strDegree << " degree program" << endl;
	for (int i = 0; i < lastIndex; i++) {
		if (nullptr != classRosterArray[i]) {
			if (classRosterArray[i]->getDegree() == degreeProgram) {
				cout << classRosterArray[i]->getStudentID() << "\tFirst Name:" << classRosterArray[i]->getFirstName() << "\tLast Name:" << classRosterArray[i]->getLastName() << "\tAge:"
					<< classRosterArray[i]->getAge() << "\tdaysInCourse: {" << classRosterArray[i]->getNumDaysTocompleteCourse()[0] << ", " << classRosterArray[i]->getNumDaysTocompleteCourse()[1]
					<< ", " << classRosterArray[i]->getNumDaysTocompleteCourse()[2] << "}\tDegree Program: " << strDegree<<endl;
			}
			
		}
	}
}


Roster::~Roster() {
	for (int i = 0; i < lastIndex; i++) {
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
	cout << "classRosterArray cleared" << endl;
}