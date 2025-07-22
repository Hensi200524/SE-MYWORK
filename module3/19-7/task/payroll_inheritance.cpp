//payroll system with ineheritance

#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    int empID;
    string name;

    Employee(int id, string n) {
        empID = id;
        name = n;
    }

    virtual void display() {
        cout << "Employee ID: " << empID << "\nName: " << name << endl;
    }

    virtual double calculateSalary() = 0; // Pure virtual function
};

// Derived class for FullTime employee
class FullTime : public Employee {
public:
    double basic, allowance;

    FullTime(int id, string n, double b, double a)
        : Employee(id, n), basic(b), allowance(a) {}

    double calculateSalary() override {
        return basic + allowance;
    }

    void display() override {
        Employee::display();
        cout << "Type: FullTime\nSalary: " << calculateSalary() << "\n\n";
    }
};

// Derived class for PartTime employee
class PartTime : public Employee {
public:
    double hours, rate;

    PartTime(int id, string n, double h, double r)
        : Employee(id, n), hours(h), rate(r) {}

    double calculateSalary() override {
        return hours * rate;
    }

    void display() override {
        Employee::display();
        cout << "Type: PartTime\nSalary: " << calculateSalary() << "\n\n";
    }
};

int main() {
    FullTime f1(101, "Alice", 30000, 5000);
    PartTime p1(102, "Bob", 50, 200);

    f1.display();
    p1.display();

    return 0;
}

