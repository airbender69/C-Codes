#include<iostream>

using namespace std;

class Student{
    string name;
    int age;
    double marks;
    double fullMarks = 500;

public:
    Student(string n, int a, double m){
        name = n;
        age = a;
        marks = m;
    }

    string getName();
    int getAge();
    double getMarks();
    double calculatePercentage();
};

string Student::getName(){
    return name;
}

int Student::getAge(){
    return age;
}

double Student::getMarks(){
    return marks;
}

double Student::calculatePercentage(){
    return (marks / fullMarks) * 100;
}


int main(){
    Student stdnt("Mario", 23, 300);
    cout << stdnt.getName() << endl;
    cout << stdnt.getAge() << endl;
    cout << stdnt.getMarks() << endl;
    cout << stdnt.calculatePercentage() << "%" << endl;

    return 0;
}
