#include "Student.h"

void Student::calculate()
{
	per = (la_marks + p_marks + bee_marks + fp_marks) / 4.0;
	if (per >= 90)
		grade = "O";
	else if (per >= 70)
		grade = "A";
	else if (per >= 50)
		grade = "B";
	else if (per >= 35)
		grade = "C";
	else
		grade = "F";
}

System::String^ Student::setdata(int roll, System::String^ nm, int la, int p, int bee, int fp)
{
	this->rollno = roll;
	this->name = nm;
	this->la_marks = la;
	this->p_marks= p;
	this->bee_marks = bee;
	this->fp_marks = fp;
	calculate();
	return rollno + "-" + name + "-" + la_marks + "-" + p_marks + "-" + bee_marks + "-" + fp_marks + "-" + per + "-" + grade;
}

int Student::retrollno() 
{
	return rollno;
}


