
#include <iostream>
#include <string>

using std::cout;
using std::getline;
using std::string;

class Lesson {
    string* TypeLesson;
    string* Homework;

public:
    Lesson() {
        TypeLesson = new string();
        Homework = new string();
    }

    string GetTypeLesson() { return *TypeLesson; }
    string GetHomework() { return *TypeLesson; }

    ~Lesson() {
        delete TypeLesson;
        delete Homework;
    }
};

int main()
{
    cout << "Hello World!\n";
}
