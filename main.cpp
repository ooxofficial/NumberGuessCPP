#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int guess1, guess2, guess3;

    srand(time(nullptr));

    int random = std::rand();

    random = random % 25 + 1;

    cout << random << "\n";
    cout << "Welcome! Enter your guess between 1-25" << "\n";
    cout << "> ";
    cin >> guess1;

    if (guess1 == random) {
        cout << "Great! You got it after the first try! " << "\n";

        exit;
    }
    else {
        if (guess1 > random) {
            cout << "Number too big!" << "\n";
        }
        else if (guess1 < random) {
            cout << "Number too small!" << "\n";
        }
    cout << "> ";
    cin >> guess2;

    if (guess2 == random) {
        cout << "Great! You got it after the second try! " << "\n";

        exit;
    }
    else {
        if (guess2 > random) {
            cout << "Number too big!" << "\n";
        }
        else if (guess2 < random) {
            cout << "Number too small!" << "\n";
        }
    }
    cout << "> ";
    cin >> guess3;
    
    if (guess3 == random) {
        cout << "Great! You got it after the third try! " << "\n";

        exit;
    }
    else {
        if (guess1 > random) {
            cout << "Number too big!" << "\n";
            cout << "The number was: " << random << "!" << "\n";
        }
        else if (guess1 < random) {
            cout << "Number too small!" << "\n";
            cout << "The number was: " << random << "!" << "\n";
        }

    }
    }
    return 0;
}