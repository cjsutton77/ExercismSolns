#include <iostream>
namespace hellmath {


enum class AccountStatus {
    troll,
    guest,
    user,
    mod
};

enum class Action {
    read,
    write,
    remove
};

bool display_post(AccountStatus poster, AccountStatus viewer){
    if (poster == AccountStatus::troll && viewer == AccountStatus::troll) return true;
    else if (poster == AccountStatus::troll) return false;
    else if (poster == AccountStatus::mod || poster == AccountStatus::user) return true;
    else if (poster == AccountStatus::guest) return false;
    else return true;
}

bool permission_check(Action action, AccountStatus person){
    // Guests: can read posts.
    // Users and Trolls: can read and write posts.
    // Moderators: can read, write and remove posts, they have all the permissions.
    if (person == AccountStatus::guest) {
        if (action == Action::read) return true;
        else return false;
    }
    else if (person == AccountStatus::user || person == AccountStatus::troll){
        if (action == Action::remove) return false;
        else return true;
    }
    else if (person == AccountStatus::mod) {
        return true;
    }
    else return true;
}

bool valid_player_combination(AccountStatus player1, AccountStatus player2){
    if (player1 == AccountStatus::guest || player2 == AccountStatus::guest) return false;
    else if (player1 == AccountStatus::troll && player2 == AccountStatus::troll) return true;
    else if (player1 == AccountStatus::troll || player2 == AccountStatus::troll) return false;
    else return true;
}

bool has_priority(AccountStatus player1, AccountStatus player2){
    if (player1 == AccountStatus::mod && player2 == AccountStatus::mod) return false;
    else if (player1 == AccountStatus::mod) return true;
    else if (player1 == AccountStatus::user && player2 == AccountStatus::user) return false;
    else if (player1 == AccountStatus::user && player2 == AccountStatus::guest) return true;    
    else if (player1 == AccountStatus::user && player2 == AccountStatus::troll) return true;
    else if (player1 == AccountStatus::guest && player2 == AccountStatus::troll) return true;
    else if (player1 == AccountStatus::guest && player2 == AccountStatus::guest) return false;    
    else if (player1 == AccountStatus::guest) return false;
    else if (player1 == AccountStatus::troll && player2 == AccountStatus::troll) return false;
    else if (player1 == AccountStatus::troll) return false;
    else return false;
}



// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.

}  // namespace hellmath
