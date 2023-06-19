#include <iostream>
using namespace std;

void menu() {
    cout << "1. Check stored EXP" <<endl;
    cout << "2. Store EXP" <<endl;
    cout << "3. Retrieve EXP" <<endl;
    cout << "4. Exit" <<endl;
}

int main() {

    int option;
    double stored_exp = 100;

    do
    {
        menu();
    cout << "Option:";
    cin >> option;

    system("cls");

    switch (option)
    {
    case 1: cout << "You have " << stored_exp << " EXP points" << endl;
    break;
    case 2: cout << "How much EXP do you want to store? ";
        double free_exp;
        cin >> free_exp;
        stored_exp += free_exp;
        break;
    case 3: cout << "How much EXP do you require? ";
        double retrieve_amount;
        cin >> retrieve_amount;
        if (retrieve_amount <= stored_exp)
            stored_exp -= retrieve_amount;
        else
            cout << "Not enough money" << endl;
        break;
    }
    } while (option != 4);

    system("pause>0");
}
