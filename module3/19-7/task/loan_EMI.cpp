#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

// Function to calculate EMI
double calculateEMI(double principal, double annualRate, int months) {
    double monthlyRate = annualRate / 12 / 100;
    return principal * monthlyRate * pow(1 + monthlyRate, months) / (pow(1 + monthlyRate, months) - 1);
}

// Function to add months to a date
tm addMonths(tm startDate, int monthsToAdd) {
    tm newDate = startDate;
    newDate.tm_mon += monthsToAdd;
    mktime(&newDate);  // normalize date
    return newDate;
}

// Function to print date
void printDate(tm date) {
    cout << put_time(&date, "%d-%m-%Y");
}

int main() {
    double principal = 500000;
    double annualRate = 8.0;
    int tenureYears = 7;
    int totalMonths = tenureYears * 12;

    // Initial EMI
    double emi = calculateEMI(principal, annualRate, totalMonths);
    cout << fixed << setprecision(2);
    cout << "Initial EMI: ?" << emi << endl;
    cout << "Total Tenure: " << totalMonths << " months\n";

    // Start Date: 22 July 2025
    tm startDate = {};
    startDate.tm_mday = 22;
    startDate.tm_mon = 6;  // July (0-based)
    startDate.tm_year = 2025 - 1900;

    // Loan end date
    tm endDate = addMonths(startDate, totalMonths);
    cout << "Loan End Date (Before Part Payment): ";
    printDate(endDate);
    cout << "\n\n";

    // Assume part payment after 12 months
    int monthsPaid = 12;
    double monthlyRate = annualRate / 12 / 100;

    // Remaining principal after 12 months
    double remaining = principal;
    for (int i = 0; i < monthsPaid; i++) {
        double interest = remaining * monthlyRate;
        double principalPaid = emi - interest;
        remaining -= principalPaid;
    }

    cout << "Principal Remaining after 1 year: ?" << remaining << endl;

    // Part payment of ?50,000
    double partPayment = 50000;
    remaining -= partPayment;
    cout << "Remaining after part payment of ?50000: ?" << remaining << "\n\n";

    // Recalculate: Option A - same EMI, reduce tenure
    int newMonths = 0;
    double tempPrincipal = remaining;
    while (tempPrincipal > 0) {
        double interest = tempPrincipal * monthlyRate;
        double principalPaid = emi - interest;
        tempPrincipal -= principalPaid;
        newMonths++;
    }

    tm newEndDate = addMonths(startDate, monthsPaid + newMonths);
    cout << "?? Option A: Same EMI (?" << emi << "), New Tenure: " << newMonths << " months\n";
    cout << "New Loan End Date: ";
    printDate(newEndDate);
    cout << "\n\n";

    // Option B - same tenure, new EMI
    int remainingMonths = totalMonths - monthsPaid;
    double newEMI = calculateEMI(remaining, annualRate, remainingMonths);
    cout << "?? Option B: Same Tenure (" << remainingMonths << " months), New EMI: ?" << newEMI << endl;
    cout << "Loan End Date remains: ";
    printDate(endDate);
    cout << "\n";

    return 0;
}

