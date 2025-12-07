#include <string>
#include <vector>

namespace election {

// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};
};

// TODO: Task 1
// vote_count takes a reference to an `ElectionResult` as an argument and will
// return the number of votes in the `ElectionResult.
int vote_count(ElectionResult &e) {
    return e.votes;    
}


// TODO: Task 2
// increment_vote_count takes a reference to an `ElectionResult` as an argument
// and a number of votes (int), and will increment the `ElectionResult` by that
// number of votes.
void increment_vote_count(ElectionResult &e, int inc) {
    e.votes += inc;
}

ElectionResult& determine_result(std::vector<ElectionResult>& final_count){
    int max=0;
    int max_index=0;
    for (int i = 0; i < final_count.size(); i++){
        if (final_count[i].votes > max) {
            max = final_count[i].votes;
            max_index = i;
            }
        else continue;
        }
    final_count[max_index].name = "President " + final_count[max_index].name;
    return final_count[max_index];
}

}  // namespace election