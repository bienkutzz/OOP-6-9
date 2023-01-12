#include <iostream>
#include <list>
using namespace std;

class Group {
private:
    class Student {
    public:
        int age;
        string name;
        Student(int age, string name) {
            this->age = age;
            this->name = name;
        }
    };
    list<Student*> students;
public:
    string groupName;
    Group(string name) {
        this->groupName = name;
    }
    void addStudent(int age, string name) {
        Student* student1 = new Student(age, name);
        this->students.push_back(student1);
    }
    void displayStudents() {
        cout << "\n Numele grupei din care fac parte " << endl <<  this->groupName << endl;
        cout << "\n Studentii din grupa sunt" << endl;
        for (Student* student : this->students) {
            cout << student->name << " " << student->age << endl;
        }
    }
};

int main()
{
    Group* group1 = new Group("Calculatoare");
    Group* group2 = new Group("Arta");

    group1->addStudent(20, "Darius");
    group1->addStudent(20, "Denis");
    group2->addStudent(21, "Andreea");
    group2->addStudent(19, "Carmen");

    group1->displayStudents();
    group2->displayStudents();
}
