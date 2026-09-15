#include <iostream>
#include "GradeCalculator.h"

int main() {
    Semester sem1;
    sem1.courses.push_back({"Math", 3, 'A'});
    sem1.courses.push_back({"Physics", 4, 'B'});
    sem1.courses.push_back({"Chemistry", 3, 'C'});

    std::vector<Semester> semesters = {sem1};

    std::cout << "Semester GPA: " << semesterGPA(sem1) << "\n";
    std::cout << "CGPA: " << calculateCGPA(semesters) << "\n";
}