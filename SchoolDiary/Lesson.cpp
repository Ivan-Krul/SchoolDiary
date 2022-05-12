#include "Lesson.h"

Lesson::Lesson() {
    pTypeLesson = new string();
    pHomework = new string();
    pDatte = new Date();
}

Lesson::~Lesson() {
    delete pTypeLesson;
    delete pHomework;
    delete pDatte;
}
