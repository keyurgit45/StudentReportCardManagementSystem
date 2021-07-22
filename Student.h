#pragma once

#include<iostream>
#include <fstream>
#include<string>
#include <stdlib.h>
using namespace std;

 ref class Student
{
	int rollno;
	System::String^ name;
	int la_marks, p_marks, bee_marks, fp_marks;
	double per;
	System::String^ grade;
	void calculate(); //function to calculate grade
public:
	System::String^ setdata(int roll, System::String^ nm, int la, int p, int bee, int fp);		   //function to accept data from user
	int retrollno() ;
};
 
 