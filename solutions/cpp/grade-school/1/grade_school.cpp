#include "grade_school.h"

#include <algorithm>

namespace grade_school {

void school::add(const std::string& name, int grade) {
    _roster[name] = grade;
}

std::vector<std::string> school::grade(int grade_number) const {
    std::vector<std::string> students;
    for (const auto& [name, grade] : _roster) {
        if (grade == grade_number) {
            students.push_back(name);
        }
    }
    std::sort(students.begin(), students.end());
    return students;
}

std::map<int, std::vector<std::string>> school::roster() const {
    std::map<int, std::vector<std::string>> grouped;
    for (const auto& [name, grade] : _roster) {
        grouped[grade].push_back(name);
    }
    for (auto& [grade, students] : grouped) {
        std::sort(students.begin(), students.end());
    }
    return grouped;
}

}  // namespace grade_school
