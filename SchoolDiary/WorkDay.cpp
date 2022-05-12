#include "WorkDay.h"
#include "Edit.h"

Lesson& WorkDay::SearchLesson_Number(int Filter) {
    for (int i = 0;i < LessonSize;i++) {
        if (i == Filter)
            return pmLesson[i];
    }
    return;
}

Lesson& WorkDay::SearchLesson_TypeLesson(string Filter) {
    for (int i = 0;i < LessonSize;i++) {
        if (pmLesson[i].TypeLesson() == Filter)
            return pmLesson[i];
    }
    return;
}

void WorkDay::WriteHomework(string TypeLesson) {
    Lesson& soup = SearchLesson_TypeLesson(TypeLesson);
    Edit(soup.Homework());
}

Lesson& WorkDay::ReadLesson(int NumLes) {
    return SearchLesson_Number(NumLes);
}

Lesson& WorkDay::ReadLesson(string TypeLesson) {
    return SearchLesson_TypeLesson(TypeLesson);
}

WorkDay::WorkDay(int LessonSize) {
	this->LessonSize = LessonSize;
	pmLesson = new Lesson[this->LessonSize];
}
