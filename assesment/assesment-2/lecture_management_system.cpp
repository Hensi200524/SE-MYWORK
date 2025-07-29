/*assesment -2 (Lecture Management System)*/

#include <iostream>
#include <string>
using namespace std;

// Class to represent lecture details
class Lecture 
{
private:
    // Data Members
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    // Default Constructor to initialize with empty/default values
    Lecture() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numberOfLectures = 0;
    }

    // Method to add lecture details (user input)
    void addLectureDetails() {
        cout << "\nEnter Lecturer Name: ";
        getline(cin, lecturerName);//used to input full strings including spaces.
        
        cout << "Enter Subject Name: ";
        getline(cin, subjectName);
        
        cout << "Enter Course Name: ";
        getline(cin, courseName);
        
        cout << "Enter Number of Lectures: ";
        cin >> numberOfLectures;
        
        cin.ignore(); // To flush newline after number input
    }

    // Method to display lecture details
    void displayLectureDetails() const {
        cout << "\nLecturer Name      : " << lecturerName;
        cout << "\nSubject Name       : " << subjectName;
        cout << "\nCourse Name        : " << courseName;
        cout << "\nNumber of Lectures : " << numberOfLectures << endl;
    }
};

// Main driver function
int main() {
    const int MAX_LECTURERS = 5;
    Lecture lectures[MAX_LECTURERS];

    cout << "========== Lecture Management System ==========\n";

    // Loop to input details for 5 lecturers
    for (int i = 0; i < MAX_LECTURERS; ++i) {
        cout << "\nEnter details for Lecturer #" << (i + 1) << ":";
        lectures[i].addLectureDetails();
    }

    // Display all lecturer details
    cout << "\n\n========== Displaying All Lecturer Details ==========\n";
    for (int i = 0; i < MAX_LECTURERS; ++i) {
        cout << "\n--- Lecturer #" << (i + 1) << " ---";
        lectures[i].displayLectureDetails();
    }

    cout << "\n========== End of Program ==========\n";
    return 0;
}

