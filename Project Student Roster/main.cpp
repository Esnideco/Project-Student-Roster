// Project Student Roster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "student.h"
#include "roster.h"
#include "degree.h"

int main()
{


    //the course title, the programming language used, your WGU student ID, and your name.
    cout << "course title: " << "My Course" << endl;
    cout << "programming language used: " << "C++" << endl;
    cout << "WGU student ID: " << " student ID" << endl;
    cout << "name: " << "My name" << endl;
    cout << "****************************************************" << endl;
    cout << "****************************************************" << endl;
    cout << endl;

    Roster classRoster;

    classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, DegreeProgram::SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, DegreeProgram::NETWORK);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, DegreeProgram::SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, DegreeProgram::SECURITY);
    classRoster.add("A5", "firstname", "lastname", "emailaddress", 20, 30, 35, 40, DegreeProgram::SOFTWARE);

    classRoster.printAll();

    classRoster.printInvalidEmails();

    for (int i = 0; i < classRoster.lastIndex; i++) {
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
    }

    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);

    classRoster.remove("A3");

    classRoster.printAll();

    classRoster.remove("A3");

    return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
