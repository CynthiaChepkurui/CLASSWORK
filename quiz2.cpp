#include <iostream>
#include <string>

using namespace std;

//base class
class Person {
protected:
    int age;
    string firstName;
    string lastName;
public:
    Person(int _age, string _firstName, string _lastName) {
        age = _age;
        firstName = _firstName;
        lastName = _lastName;
    }

    void setValues(int _age, string _firstName, string _lastName) {
        age = _age;
        firstName = _firstName;
        lastName = _lastName;
    }

    void getValues() {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Age: " << age << endl;
    }
};

//derived class
class Student : public Person {
protected:
    string institution;
    int year;
    int registrationNumber;
public:
    Student(int _age, string _firstName, string _lastName, string _institution, int _year, int _registrationNumber) : Person(_age, _firstName, _lastName) {
        institution = _institution;
        year = _year;
        registrationNumber = _registrationNumber;
    }

    void setValues(int _age, string _firstName, string _lastName, string _institution, int _year, int _registrationNumber) {
        Person::setValues(_age, _firstName, _lastName);
        institution = _institution;
        year = _year;
        registrationNumber = _registrationNumber;
    }

    void getValues() { //takes in all three data members as arguments and initializes them
        Person::getValues();
        cout << "Institution: " << institution << endl;
        cout << "Year of Study: " << year << endl;
        cout << "Registration Number: " << registrationNumber << endl;
    }
};

int main() {
    Student myStudent(21, "John", "Doe", "University of XYZ", 3, 12345);
    myStudent.getValues();

    myStudent.setValues(22, "Jane", "Doe", "University of ABC", 2, 67890);
    myStudent.getValues();

    return 0;
}
