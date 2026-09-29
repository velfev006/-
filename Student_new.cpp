#include <iostream>
using namespace std;

//Суть: вместо vector — обычный массив + счётчик count, вместо string — const char*. 
//Работает так же, но зависимостей меньше.

class Student {
public:
    int marks[10];      // фиксированный массив вместо vector
    int count;          // сколько оценок сейчас
    const char* fullName; // указатель на строку вместо string

    Student(const char* fn, int m1, int m2, int m3) {
        fullName = fn;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        count = 3;
    }

    void addMark(int mark) {
        if (count < 10) {
            marks[count] = mark;
            count++;
        }
    }

    void showMarks() const {
        for (int i = 0; i < count; i++) {
            cout << marks[i] << " ";
        }
    }
};

int main() {
    Student stud("Roman", 1, 2, 3);

    cout << stud.fullName << ": ";
    stud.showMarks();
    cout << "\n";

    stud.addMark(2);
    cout << stud.fullName << ": ";
    stud.showMarks();
    cout << "\n";

    return 0;
}
