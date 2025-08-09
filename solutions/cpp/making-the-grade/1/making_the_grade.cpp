#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> int_scores = {};
    for(double score : student_scores){
        int new_score{static_cast<int>(score)};
        int_scores.emplace_back(new_score);
    }
    return int_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int num_failed = 0;
    for(int score : student_scores){
        if(score <= 40){
            num_failed++;
        }
    }
    return num_failed;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
     std::array<int, 4> thresholds = {0, 0, 0, 0};
    
    for(int q = 0; q < 4 ; q++){
        int quarter = (highest_score - 40) / 4;
        //thresholds[q-1] = highest_score - quarter * (q ) + 1;
        thresholds[q] = 40 + quarter * q  + 1;
    }

    return thresholds;
}
// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> result = {};
    for(int i = 0; i < student_scores.size(); i++){
        std::string line = std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
        result.emplace_back(line);
        
    }
    return result;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for(int i = 0; i < student_scores.size(); i++){
        if(student_scores[i] == 100){
            return student_names[i];
            
        }
    }
    return "";
}
