#pragma once
#include <string>
using namespace std;

enum DegreeProgram
{
	SECURITY, 
	NETWORK, 
	SOFTWARE
};

//string getDegreeString(DegreeProgram degree) {
//	string strDegree{ "" };
//	if (DegreeProgram::NETWORK == degree) {
//		strDegree = "NETWORK";
//	}
//	else if (DegreeProgram::SECURITY == degree) {
//		strDegree = "SECURITY";
//	}
//	else if (DegreeProgram::SOFTWARE == degree) {
//		strDegree = "SOFTWARE";
//	}
//	return strDegree;
//}