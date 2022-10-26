#pragma once
#include<string>

using namespace std;

class Schedule
{
private:
	string courseNum;
	int roomNum;
	string instructor;
	string meetingTime;
public:
	Schedule()
	{
		courseNum = " ";
		roomNum = 0;
		instructor = " ";
		meetingTime = " ";
	}
	Schedule(string c, int r, string i, string m)
	{
		courseNum = c;
		roomNum = r;
		instructor = i;
		meetingTime = m;
	}
	void setcourseNum(string c)
	{
		courseNum = c;
	}
	void setroomNum(int r)
	{
		roomNum = r;
	}
	void setInstructor(string i)
	{
		instructor = i;
	}
	void setmeetingTime(string m)
	{
		meetingTime = m;
	}
	string getcourseNum() const
	{
		return courseNum;
	}
	int getroomNum() const
	{
		return roomNum;
	}
	string getInstructor() const
	{
		return instructor;
	}
	string getmeetingTime() const
	{
		return meetingTime;
	}

};

