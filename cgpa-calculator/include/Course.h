#pragma once

#include <string>
#include <vector>

struct Course {
    std::string name;
    int credits;
    char grade;
};

struct Semester {
    std::vector<Course> courses;
};