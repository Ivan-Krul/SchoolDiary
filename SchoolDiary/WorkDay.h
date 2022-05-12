#pragma once
#include "Lesson.h"

using std::string;

class WorkDay
{
	Lesson* pmLesson;
	int LessonSize;

    Lesson& SearchLesson_TypeLesson(string Filter);
    Lesson& SearchLesson_Number(int Filter);

public:
    WorkDay(int LessonSize);

	void WriteHomework(string TypeLesson);
	void WriteHomework(int NumLes);

	Lesson& ReadLesson(string TypeLesson);
	Lesson& ReadLesson(int NumLes);

	~WorkDay() {
		delete[] pmLesson;
	}
};

