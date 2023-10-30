#pragma once

#include "student.h"
//#include "degree.h"

const int numberOfStudent{ 5 };
// const int numberOfStudent = 5;

class Roster {


public:
	int lastIndex{ -1 };	//Initializer list introduced in C++11
	Student* classRosterArray[numberOfStudent];

	~Roster();

	void add(const string studentID, const string firstName, const string lastName,
		const string emailAddress, const int age, const int daysInCourse1, const int daysInCourse2,
		const int daysInCourse3, const DegreeProgram degreeprogram);

	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);

};