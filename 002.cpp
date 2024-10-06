
#include <iostream>
#include <string>

using namespace std;

int main() {
    //declaring a string variable
    string playerName;
    //greeting the player
    cout << "Welcome to the Galactic Adventure!\n";
    cout << "Enter your name: ";
    cin >> playerName;

    cout << "Hello, " << playerName << "! You find yourself aboard the starship .\n";
    cout << "Your mission: explore the uncharted regions of the galaxy.\n";

    int choice;
    do {
        //Choices for the user to enter
        cout << "\nChoose your next action:\n";
        cout << "1. Explore a nearby planet\n";
        cout << "2. Interact with aliens\n";
        cout << "3. Investigate cosmic anomalies\n";
        cout << "4. Quit the game\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
//cases which the user may like to implement
        switch (choice) {
            case 1:
                cout << "You decide to explore the nearby planet.\n";
                
                break;
            case 2:
                cout << "You encounter a group of friendly aliens.\n";
                
                break;
            case 3:
                cout << "You come across a cosmic anomaly.\n";
               
                break;
            case 4:
                cout << "Thanks for playing! Your journey ends here.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
        //condition for the user to quit the program 
    } while (choice != 4);

    cout << "Goodbye, " << playerName << "! May the cosmic winds guide you.\n";

    return 0;
}