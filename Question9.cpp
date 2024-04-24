#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n = "N/A") {
        name = n;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
private:
    string course;
    int marks;
    int year;

public:
    Student(string n, string c, int m, int y) {
        name = n, course = c, marks = m, year = y;
    }

    void display() override {
        Person::display();
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

class Employee : public Person {
private:
    string department;
    double salary;

public:
    Employee(string n, string d, double s) {
        name = n, department = d, salary = s;
    }

    void display() override {
        Person::display();
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person* people[3];
    people[0] = new Person("ABC");
    people[1] = new Student("XYZ", "Maths", 100, 2023);
    people[2] = new Employee("THQ", "COMP", 50000);

    for (int i = 0; i < 3; ++i) {
        people[i]->display();
        cout << endl;
    }

}
