#include <iostream>

using namespace std;

int main()


#include <iostream>
using namespace std;

int main() {
    int age;
    char gender;
    bool attractive, kind;

    cout << "Welcome to the Partner Selection Program!" << endl;
    cout << "Please answer the following questions to find your ideal partner." << endl;

    cout << "How old are you? ";
    cin >> age;

    cout << "What is your gender? (M/F) ";
    cin >> gender;

    cout << "Do you find this person attractive? (1 for yes, 0 for no) ";
    cin >> attractive;

    cout << "Is this person kind and caring? (1 for yes, 0 for no) ";
    cin >> kind;

    if (age >= 18) {
        if (gender == 'M' || gender == 'F') {
            if (attractive && kind) {
                cout << "Congratulations! This person might be your ideal partner!" << endl;
            } else {
                cout << "Sorry, this person doesn't meet all your criteria." << endl;
            }
        } else {
            cout << "Invalid gender input. Please enter M or F." << endl;
        }
    } else {
        cout << "You must be at least 18 years old to use this program." << endl;
    }

    return 0;
}

