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

void WorkDay::WriteHomework(int NumLes) {
    Lesson& soup = SearchLesson_Number(NumLes);
    Edit(soup.Homework());
}

void WorkDay::WriteTypeLesson(int NumLes, string TypeLesson) {
    Lesson& soup = SearchLesson_Number(NumLes);
    soup.TypeLesson() = TypeLesson;
}

Lesson& WorkDay::ReadLesson(int NumLes) {
    return SearchLesson_Number(NumLes);
}

void WorkDay::WriteTypeLesson(int NumLes) {
    Lesson& soup = SearchLesson_Number(NumLes);
    Edit(soup.TypeLesson());
}

void WorkDay::Init(int LessonSize) {
	this->LessonSize = LessonSize;
	pmLesson = new Lesson[this->LessonSize];
}
