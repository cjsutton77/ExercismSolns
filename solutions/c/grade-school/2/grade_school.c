#include "grade_school.h"

int query(roster_t r)
{
    return r.count ;
}

void init_roster(roster_t* roster){
    roster->count = 0;
}

void sort_roster(roster_t *roster)
{
    for (size_t i = 1; i < roster->count; i++) {
        student_t key = roster->students[i];
        size_t j = i;
        while (j > 0 &&
               (roster->students[j - 1].grade > key.grade ||
                (roster->students[j - 1].grade == key.grade &&
                 strcmp(roster->students[j - 1].name, key.name) > 0))) {
            roster->students[j] = roster->students[j - 1];
            j--;
        }
        roster->students[j] = key;
    }
}

bool add_student(roster_t* roster, char* name, uint8_t grade){
    if (roster->count > 0){
        for (size_t i = 0; i < roster->count;i++){
            if (!strcmp(roster->students[i].name,name))
                return false;
            else continue;
        }
    }
    size_t index = roster->count;
    roster->count += 1;
    student_t temp;
    temp.grade = grade;
    //printf(" -- %ld -- %d -- %s --\n",roster->count,grade,name);
    strcpy(temp.name,name);

    roster->students[index] = temp;
    sort_roster(roster);  // <-- add this line

    return true;
}

roster_t get_grade(roster_t* roster, uint8_t grade){
    roster_t new_roster; 
    init_roster(&new_roster);
    for (size_t i = 0; i < roster->count; i++){
        if (roster->students[i].grade == grade){
            add_student(&new_roster,roster->students[i].name,grade);
        }
        else continue;
    }
    return new_roster;

}
