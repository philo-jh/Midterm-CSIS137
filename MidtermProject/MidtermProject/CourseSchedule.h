#ifndef COURSESCHEDULE_H
#define COURSESCHEDULE_H

#include <string>
#include "Semester.h"
#include "Course.h"

class CourseSchedule {
private:
	std::string* studentName;
	Semester* sem;
	Course* courses;
	int maxCourses;
	int numCourses;

	bool checkDates(Semester&, Date&, Date&);
public:
	CourseSchedule(std::string = "Student's Name undefined",
				Semester& = Semester(),
				int maxCourses = 0);
	~CourseSchedule();

	CourseSchedule& setStudentName(std::string);
	std::string getStudentName();

	//CourseSchedule& setSemester(Semester&);
	Semester& getSemester();

	//CourseSchedule setCourse(int, Semester&);
	//Course& getCourse(int);

	int getMaxCourses();

	int getNumCourses();

	bool addCourse(Course&);
	bool removeCourse(int);

};
#endif // !COURSESCHEDULE_H
