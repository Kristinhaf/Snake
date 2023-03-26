#include <iostream>
#include <string.h>


#include "game.h"
using namespace std;

Game game;

int main() {
    cout << "Welcome to Snake" << endl;

    while(true) {

        int user_action;
        cout << "\n1. Start Game\n 2. quit\n" << endl;
        cout << "Input: ";
        cin >> user_action;


        if (user_action == 1) {
            char name[100];
            cout << "Enter your name: ";
            cin >> name;
            game.play(name);
        } 


        else if (user_action == 2) return 0;

        else {
            cout << "Not a valid option" << endl;
            cin.clear();
            cin.ignore();
        }
    }
    return 0;
}