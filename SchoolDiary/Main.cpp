
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "Lesson.h"
#include "Edit.h"

using std::cout;
using std::cin;
using std::getline;
using std::string;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Lesson lesson;
    lesson.SetDateNow();

    Edit(lesson.Homework());

    cout  << lesson.Homework()<<'\n';

    Edit(lesson.Homework());

    cout << lesson.Homework() << '\n';
}
