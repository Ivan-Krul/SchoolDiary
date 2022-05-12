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
	WorkDay() {}
	void Init(int LessonSize);

	void WriteHomework(string TypeLesson);
	void WriteHomework(int NumLes);

	void WriteTypeLesson(int NumLes, string TypeLesson);
	void WriteTypeLesson(int NumLes);

	Lesson& ReadLesson(string TypeLesson) { return SearchLesson_TypeLesson(TypeLesson); }
	Lesson& ReadLesson(int NumLes) { return SearchLesson_Number(NumLes); }

	~WorkDay() { delete[] pmLesson; }
};

