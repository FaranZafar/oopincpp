#include <iostream>
#include <string>
#include <iomanip> // For formatting output (setprecision)

using namespace std;

// Class Definition
class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    string accountType; // "Savings" or "Current"
    float balance;
    float minimumBalance;

public:
    // 1. Default Constructor 
    BankAccount() {
        accountNumber = "00000";
        accountHolderName = "Default Holder";
        accountType = "Savings";
        balance = 0.0f;
        minimumBalance = 500.0f; // Default minimum
        cout << "--- Default Account Created ---" << endl;
    }

    // 2. Parameterized Constructor 
    BankAccount(string accNum, string name, string type, float initialBalance, float minBal) {
        accountNumber = accNum;
        accountHolderName = name;
        accountType = type;
        balance = initialBalance;
        minimumBalance = minBal;
        cout << "--- Parameterized Account Created ---" << endl;
    }
    
    // Setter for manual attribute setting (used for demonstration)
    void setDetails(string accNum, string name, string type, float initialBalance, float minBal) {
        accountNumber = accNum;
        accountHolderName = name;
        accountType = type;
        balance = initialBalance;
        minimumBalance = minBal;
    }
    
    // Getter for Account Number (useful for search)
    string getAccountNumber() const {
        return accountNumber;
    }

    // 3. Member Functions

    // Deposit function 
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "*** Deposit of $" << fixed << setprecision(2) << amount 
                 << " successful. New balance: $" << balance << " ***" << endl;
        } else {
            cout << "!!! Deposit amount must be positive. !!!" << endl;
        }
    }

    // Withdrawal function 
    void withdraw(float amount) {
        if (amount > 0) {
            // Check if withdrawal keeps balance above minimum [cite: 27]
            if (balance - amount >= minimumBalance) {
                balance -= amount;
                cout << "*** Withdrawal of $" << fixed << setprecision(2) << amount 
                     << " successful. New balance: $" << balance << " ***" << endl;
            } else {
                cout << "!!! Withdrawal failed. Insufficient funds to maintain minimum balance of $" 
                     << fixed << setprecision(2) << minimumBalance << ". Current balance: $" 
                     << balance << " !!!" << endl;
            }
        } else {
            cout << "!!! Withdrawal amount must be positive. !!!" << endl;
        }
    }

    // Display function 
    void display() const {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name:    " << accountHolderName << endl;
        cout << "Account Type:   " << accountType << endl;
        cout << "Current Balance: $" << fixed << setprecision(2) << balance << endl;
        cout << "Minimum Balance: $" << fixed << setprecision(2) << minimumBalance << endl;
        cout << "-----------------------" << endl;
    }

    // Calculate Interest function (Simple Interest) 
    void calculateInterest(float rate, int years) {
        if (rate > 0 && years > 0) {
            // Simple Interest Formula: I = (P * R * T) / 100
            float interest = (balance * rate * years) / 100.0f;
            cout << "\n*** Interest Calculation ***" << endl;
            cout << "Rate: " << rate << "% | Years: " << years << endl;
            cout << "Interest Earned: $" << fixed << setprecision(2) << interest << endl;
            cout << "----------------------------" << endl;
        } else {
            cout << "!!! Interest rate and years must be positive. !!!" << endl;
        }
    }
};

// Function for the bonus requirement (Search and Transaction) 
void performTransaction(BankAccount accounts[], int count, string accNum) {
    bool found = false;
    for (int i = 0; i < count; ++i) {
        if (accounts[i].getAccountNumber() == accNum) {
            cout << "\n*** Account " << accNum << " found. ***" << endl;
            accounts[i].display();
            
            // Simple interaction
            int choice;
            float amount;
            cout << "\nSelect Action for Account " << accNum << ":\n";
            cout << "1. Deposit\n2. Withdraw\n3. Calculate Interest\n4. Back to Main\n";
            cout << "Enter choice (1-4): ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter amount to deposit: $";
                    cin >> amount;
                    accounts[i].deposit(amount);
                    break;
                case 2:
                    cout << "Enter amount to withdraw: $";
                    cin >> amount;
                    accounts[i].withdraw(amount);
                    break;
                case 3: {
                    float rate;
                    int years;
                    cout << "Enter interest rate (%): ";
                    cin >> rate;
                    cout << "Enter number of years: ";
                    cin >> years;
                    accounts[i].calculateInterest(rate, years);
                    break;
                }
                case 4:
                    cout << "Returning to main menu." << endl;
                    break;
                default:
                    cout << "Invalid choice." << endl;
                    break;
            }
            
            accounts[i].display(); // Show updated details
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "!!! Account with number " << accNum << " not found. !!!" << endl;
    }
}


// Main function for demonstration [cite: 25]
int main() {
    // Array to hold the accounts for the bonus search functionality
    BankAccount accounts[3]; 
    int accountCount = 0;

    // --- 1. Account A1: Parameterized Constructor (Example Scenario) [cite: 32] ---
    BankAccount A1("1001", "Alice Smith", "Current", 1000.0f, 500.0f);
    A1.display(); 
    accounts[accountCount++] = A1;

  

    
   

    // --- 2. Account A2: Parameterized Constructor (Different values) [cite: 25] ---
    BankAccount A2("2002", "Bob Johnson", "Savings", 5000.0f, 100.0f);
    A2.display();
    accounts[accountCount++] = A2;
    
    // Perform operations on A2
    cout << "\n--- Performing Operations on A2 (2002) ---" << endl;
    A2.withdraw(500.0f);
    A2.deposit(100.0f);
    A2.calculateInterest(3.5f, 5);
    A2.display();

    // --- 3. Account A3: Default Constructor (and set manually)  ---
    BankAccount A3; // Calls default constructor [cite: 34]
    A3.setDetails("3003", "Charlie Brown", "Current", 500.0f, 200.0f); // Set attributes manually [cite: 34]
    A3.display();
    accounts[accountCount++] = A3;

    // Perform operations on A3
    cout << "\n--- Performing Operations on A3 (3003) ---" << endl;
    A3.deposit(1000.0f);
    A3.withdraw(1200.0f); // 1500 - 1200 = 300, which is > 200 min
    A3.calculateInterest(6.0f, 1);
    A3.display();

    // --- 4. Bonus Requirement: Search and Transaction  ---
    cout << "\n#####################################################" << endl;
    cout << "### BONUS: Account Search and Transaction Interface ###" << endl;
    cout << "#####################################################" << endl;

    string searchAccNum;
    cout << "Enter account number to search (e.g., 1001, 2002, 3003): ";
    cin >> searchAccNum;

    performTransaction(accounts, accountCount, searchAccNum);

    return 0;
}
