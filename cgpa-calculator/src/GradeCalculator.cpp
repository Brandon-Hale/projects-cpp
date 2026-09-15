#include "GradeCalculator.h"

double gradeToPoints(char grade) {
    switch (grade) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default: return -1.0;
    }
}

double semesterGPA(const Semester& semester) {
    double totalPoints = 0;
    int totalCredits = 0;

    for (const Course& course : semester.courses) {
        totalPoints += course.credits * gradeToPoints(course.grade);
        totalCredits += course.credits;
    }

    return totalCredits > 0 ? totalPoints / totalCredits : 0.0;
}

double calculateCGPA(const std::vector<Semester>& semesters) {
    double totalPoints = 0;
    int totalCredits = 0;

    for (const Semester& semester : semesters) {
        for (const Course& course : semester.courses) {
            totalPoints += course.credits * gradeToPoints(course.grade);
            totalCredits += course.credits;
        }
    }

    return totalCredits > 0 ? totalPoints / totalCredits : 0.0;
}