// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    // TODO: Implement the interest_rate function

    int balances [3] = {0, 1000, 5000};
    double rates [4] = {3.213, 0.5, 1.621, 2.475};
    
    double interest_balances;
    
    for(int i = 0; i < 3; i++){
        if(balance < balances[i]){
            interest_balances = rates[i];
            break;
        }
    }
        if(balance >= balances[2]) {
            interest_balances = rates[3];
            }
    
    return interest_balances;
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    // TODO: Implement the yearly_interest function
    
    return interest_rate(balance) * balance / 100;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    // TODO: Implement the annual_balance_update function
    return balance + yearly_interest(balance);
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // TODO: Implement the years_until_desired_balance function
    
    int years = 0;

    for(int i = 1; balance < target_balance; i++){
        balance = annual_balance_update(balance);
        years++;
    }


    
    return years;
}