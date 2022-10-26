#include<iostream>
#include<map>
#include<string>
#include "Schedule.h"

using namespace std;

int main()
{
	string searchCourse;

	Schedule schedule1("CS101", 3004, "Haynes", "8:00 a.m");
	Schedule schedule2("CS102", 4501, "Alvarado", "9:00 a.m");
	Schedule schedule3("CS103", 6755, "Rich", "10:00 a.m");
	Schedule schedule4("NT110", 1244, "Burke", "11:00 a.m");
	Schedule schedule5("CM241", 1411, "Lee", "1:00 p.m");

	map<string, Schedule> schedule;

	map<string, Schedule>::iterator iter;

	schedule[schedule1.getcourseNum()] = schedule1;
	schedule[schedule2.getcourseNum()] = schedule2;
	schedule[schedule3.getcourseNum()] = schedule3;
	schedule[schedule4.getcourseNum()] = schedule4;
	schedule[schedule5.getcourseNum()] = schedule5;

	cout << "What is the course number (ex. CS101): ";
	getline(cin, searchCourse);

	iter = schedule.find(searchCourse);

	if (iter != schedule.end())
	{
		cout << "----------------------------------" << endl;
		cout << "Room number: " << iter->second.getroomNum() << endl << endl;
		cout << "Instructor: " << iter->second.getInstructor() << endl << endl;
		cout << "Meeting time: " << iter->second.getmeetingTime() << endl << endl;
	}
	else
	{
		cout << "ERROR: The Course number does not exist. " << endl << endl;
	}

	system ("pause");
	return 0;
}