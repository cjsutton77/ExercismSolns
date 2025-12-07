#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> round;
    for (auto it:student_scores) {
        round.push_back(static_cast<int>(it));
    }
    return round;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int val = 0;
    for (auto it: student_scores) {
        (it<=40) ? ++val : val+=0;
    }
    return val;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> best;
    for(auto it: student_scores) {
        if (it>=threshold) best.push_back(it);
        else continue;
    }
    return best;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int diff = highest_score - 40;
    std::array<int,4> grades {};
        for (int i = 0; i < 4; ++i) {
        grades.at(i) = 40 + 1 + i * diff/4;
    }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> ranking;
    for (auto i = 0; i < student_scores.size(); i++) {
        ranking.push_back(std::to_string(i+1)+". "+student_names.at(i)+": " + std::to_string(student_scores.at(i)));
    }
    return ranking;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::string output = "";
    for (auto i = 0; i < student_scores.size(); i++) {
        if (student_scores.at(i) == 100) {
            output = student_names.at(i);
            break;
            }
        else continue;
    }
    return output;
}
