#pragma once
#include <string>
#include "Date.h"

using std::string;

class Lesson {
    string* pTypeLesson;
    string* pHomework;
    Date* pDatte;
public:
    Lesson();

    void SetDateDay(int Day) { pDatte->SetDay(Day); }
    void SetDateMonth(int Month) { pDatte->SetMonth(Month); }
    void SetDateYear(int Year) { pDatte->SetYear(Year); }

    void SetDateNow() { pDatte->Now(); }

    string& TypeLesson() { return *pTypeLesson; }
    string& Homework() { return *pTypeLesson; }
    int GetDateDay() { return pDatte->GetDay(); }
    int GetDateMonth() { return pDatte->GetMonth(); }
    int GetDateYear() { return pDatte->GetYear(); }

    ~Lesson();
};
