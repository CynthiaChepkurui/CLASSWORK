#include <iostream>
#include <string>

using namespace std;

class Person {
    protected:
        int age;
        string firstname;
        string lastname;

    public:
        Person(int a, string fn, string ln) {
            age = a;
            firstname = fn;
            lastname = ln;
        }

        void getValues() {
            cout << "Age: " << age << endl;
            cout << "First name: " << firstname << endl;
            cout << "Last name: " << lastname << endl;
        }

        void setValues(int a, string fn, string ln) {
            age = a;
            firstname = fn;
            lastname = ln;
        }
};

class Student : public Person {
    private:
        string institution;
        int year;
        int reg_num;

    public:
        Student(int a, string fn, string ln, string i, int y, int r) : Person(a, fn, ln) {
            institution = i;
            year = y;
            reg_num = r;
        }

        void getValues() {
            Person::getValues();
            cout << "Institution: " << institution << endl;
            cout << "Year of study: " << year << endl;
            cout << "Registration number: " << reg_num << endl;
        }

        void setValues(int a, string fn, string ln, string i, int y, int r) {
            Person::setValues(a, fn, ln);
            institution = i;
            year = y;
            reg_num = r;
        }
};

class Course {
    protected:
        string course_name;

    public:
        Course(string name) {
            course_name = name;
        }

        void getValues() {
            cout << "Course name: " << course_name << endl;
        }
};

class ICT : public Course {
    private:
        string level;

    public:
        ICT(string name, string l) : Course(name) {
            level = l;
        }

        void getValues() {
            Course::getValues();
            cout << "Level: " << level << endl;
        }
};

class BSC_IT : public ICT {
    private:
        string stage;

    public:
        BSC_IT(string name, string l, string s) : ICT(name, l) {
            stage = s;
        }

        void getValues() {
            ICT::getValues();
            cout << "Stage: " << stage << endl;
        }
};

int main() {
    // create a person
    Person p(20, "Moses", "Kemei");
    cout << "Person information:" << endl;
    p.getValues();

    // create a student
    Student s(22, "Janet", "Wairimu", "Chuka Univeristy", 3, 2110320);
    cout << endl << "Student information:" << endl;
    s.getValues();

    // create a course
    Course c("Business");
    cout << endl << "Course information:" << endl;
    c.getValues();

    // create an ICT course
    ICT i("ICT", "Diploma");
    cout << endl << "ICT course information:" << endl;
    i.getValues();

    // create a BSC-IT course
    BSC_IT b("BSC-IT", "Degree", "Stage 1");
    cout << endl << "BSC-IT course information:" << endl;
    b.getValues();

    return 0;
}
