namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus {
    troll,
    guest,
    user,
    mod
    };
    

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum class Action {
    read,
    write,
    remove
    };

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus account_poster, AccountStatus account_viewer){

        switch(account_poster){
            case AccountStatus::troll :
                return account_poster == AccountStatus::troll && account_viewer == AccountStatus::troll;
            default:
            return account_poster != AccountStatus::troll;
        }
        
       
    }

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
bool permission_check(Action action, AccountStatus account){
    
     switch(account){
         case AccountStatus::guest:
             return action == Action::read;
             
         case AccountStatus::user:
         case AccountStatus::troll:
             return action == Action::read || action == Action::write;
         
         //case AccountStatus::mod:
         default:
             return action == Action::read || action == Action::write || action == Action::remove;
             
     }
}
// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    
bool valid_player_combination(AccountStatus player_1, AccountStatus player_2){
    //std::vector<AccountStatus> players_combination{player_1, player_2};
    /*
    switch (player_1 == AccountStatus::troll){
        case player_2 == AccountStatus::troll :
            return true;
        default: return false;
    }*/

   
    
    if(player_1 == AccountStatus::guest || player_2 == AccountStatus::guest){
        return false;
    }
    if(player_1 == AccountStatus::troll || player_2 == AccountStatus::troll){
        return player_1 == AccountStatus::troll && player_2 == AccountStatus::troll;
    }
    return true;
        
        
    
}
// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus player_1, AccountStatus player_2){
        /*
        int first = static_cast<int>(player_1);
        int second = static_cast<int>(player_2);
        return first >= second;
        */
        return static_cast<int>(player_1) > static_cast<int>(player_2);
    }

}  // namespace hellmath