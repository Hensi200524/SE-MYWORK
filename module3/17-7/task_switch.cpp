//bike-agency program in switch statement

#include <iostream>
using namespace std;

// Function to calculate price
int calculatePrice(int conditionChoice, int insuranceChoice, int year) {
    int price = 80000;

    // Switch for condition
    switch (conditionChoice) {
        case 1: // Good
            price -= 5000;
            break;
        case 2: // Medium
            price -= 15000;
            break;
        case 3: // Poor
            price -= 25000;
            break;
        default:
            cout << "Invalid condition choice.\n";
    }

    // Switch for insurance
    switch (insuranceChoice) {
        case 1: // Running
            break; // no change
        case 2: // Expired
            price -= 5000;
            break;
        default:
            cout << "Invalid insurance choice.\n";
    }

    // Depreciation by year
    int age = 2025 - year;
    price -= age * 2000;

    // Set minimum price to 30000
    if (price < 30000)
        price = 30000;

    return price;
}

int main() {
    string vehicleNo, rcBookNo, company;
    int year, conditionChoice, insuranceChoice, n;

    cout << "Enter number of bikes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Vehicle No: ";
        cin >> vehicleNo;

        cout << "Enter RC Book No: ";
        cin >> rcBookNo;

        cout << "Enter Model Year: ";
        cin >> year;

        cout << "Select Vehicle Condition:\n";
        cout << "1. Good\n2. Medium\n3. Poor\n";
        cout << "Enter choice (1-3): ";
        cin >> conditionChoice;

        cout << "Select Insurance Status:\n";
        cout << "1. Running\n2. Expired\n";
        cout << "Enter choice (1-2): ";
        cin >> insuranceChoice;

        cout << "Enter Company Name: ";
        cin >> company;

        int price = calculatePrice(conditionChoice, insuranceChoice, year);

        cout << "\n--- Bike Details ---";
        cout << "\nVehicle No: " << vehicleNo;
        cout << "\nRC Book No: " << rcBookNo;
        cout << "\nModel Year: " << year;
        cout << "\nCompany: " << company;
        cout << "\nEstimated Price: Rs. " << price << "\n";
    }

    return 0;
}
