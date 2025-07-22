//payroll system using with inheritance 2

#include <iostream>
using namespace std;

// Base Class
class Employee 
{
				protected:
    				int empID;
    				string name;
    				string department;
    				string joiningDate;

public:
    Employee(int id, string n, string dept, string joinDate)
	{
    	
    	empID = id;
    	name = n;
    	department = dept;
    	joiningDate = joinDate;
	}
        //: empID(id), name(n), department(dept), joiningDate(joinDate) 

    virtual void displayInfo() 
	{
        	cout << "ID: " << empID << "\nName: " << name
             << "\nDepartment: " << department
             << "\nJoining Date: " << joiningDate << endl;
    }

    virtual double calculateNetSalary() = 0; // Pure virtual
};

// FullTime Employee
class FullTime : public Employee 
{
		protected:
    	double basicSalary;
    double allowance;
    double deduction;

public:
    FullTime(int id, string n, string dept, string joinDate,
             double basic, double allow, double deduct)
        : Employee(id, n, dept, joinDate), basicSalary(basic),
          allowance(allow), deduction(deduct) {}

    double calculateNetSalary() override {
        return basicSalary + allowance - deduction;
    }

    void displayInfo() override {
        Employee::displayInfo();
        cout << "Type: FullTime\nNet Salary: " << calculateNetSalary() << "\n\n";
    }
};

// Manager (Derived from FullTime)
class Manager : public FullTime {
    double bonus;

public:
    Manager(int id, string n, string dept, string joinDate,
            double basic, double allow, double deduct, double bonusAmt)
        : FullTime(id, n, dept, joinDate, basic, allow, deduct), bonus(bonusAmt) {}

    double calculateNetSalary() override {
        return FullTime::calculateNetSalary() + bonus;
    }

    void displayInfo() override {
        Employee::displayInfo();
        cout << "Type: Manager\nNet Salary: " << calculateNetSalary() << "\n\n";
    }
};

// TeamLead (Derived from FullTime)
class TeamLead : public FullTime {
public:
    TeamLead(int id, string n, string dept, string joinDate,
             double basic, double allow, double deduct)
        : FullTime(id, n, dept, joinDate, basic, allow, deduct) {}

    void displayInfo() override {
        Employee::displayInfo();
        cout << "Type: TeamLead\nNet Salary: " << calculateNetSalary() << "\n\n";
    }
};

// PartTime Employee
class PartTime : public Employee {
    double hourlyRate;
    int hoursWorked;

public:
    PartTime(int id, string n, string dept, string joinDate,
             double rate, int hours)
        : Employee(id, n, dept, joinDate), hourlyRate(rate), hoursWorked(hours) {}

    double calculateNetSalary() override {
        return hourlyRate * hoursWorked;
    }

    void displayInfo() override {
        Employee::displayInfo();
        cout << "Type: PartTime\nNet Salary: " << calculateNetSalary() << "\n\n";
    }
};

// Intern
class Intern : public Employee {
    double stipend;

public:
    Intern(int id, string n, string dept, string joinDate, double stip)
        : Employee(id, n, dept, joinDate), stipend(stip) {}

    double calculateNetSalary() override {
        return stipend;
    }

    void displayInfo() override {
        Employee::displayInfo();
        cout << "Type: Intern\nNet Salary: " << calculateNetSalary() << "\n\n";
    }
};

// Contractor
class Contractor : public Employee {
    double contractAmount;
    double tax;

public:
    Contractor(int id, string n, string dept, string joinDate,
               double amount, double taxDeduct)
        : Employee(id, n, dept, joinDate), contractAmount(amount), tax(taxDeduct) {}

    double calculateNetSalary() override {
        return contractAmount - tax;
    }

    void displayInfo() override {
        Employee::displayInfo();
        cout << "Type: Contractor\nNet Salary: " << calculateNetSalary() << "\n\n";
    }
};

// Main Function
int main() {
    // Creating different employee types
    Manager m(1, "Alice", "Finance", "2020-01-01", 50000, 10000, 5000, 8000);
    TeamLead t(2, "Bob", "IT", "2021-03-15", 40000, 7000, 3000);
    PartTime p(3, "Charlie", "Support", "2023-06-10", 300, 40);
    Intern i(4, "Daisy", "R&D", "2024-01-10", 10000);
    Contractor c(5, "Eve", "Operations", "2022-09-05", 60000, 8000);

    // Displaying information
    m.displayInfo();
    t.displayInfo();
    p.displayInfo();
    i.displayInfo();
    c.displayInfo();

    return 0;
}

