#pragma once

#include <vector>
#include "Course.h"

double gradeToPoints(char grade);
double semesterGPA(const Semester& semester);
double calculateCGPA(const std::vector<Semester>& semesters);