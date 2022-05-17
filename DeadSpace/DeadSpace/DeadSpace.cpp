// DeadSpace.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include "GameStructureIntro.h"

#include "Search.h"
#include "Human.h"
using namespace std;

string password = "101";
int Choice;
string ps;
int i = 0;
int j = 1 + i;

struct infector {
    string name;
    int hp;
    int health = 50;
    int attack() {
        return 13;
    }
    void takeDamage(int i) {
        this->health = this->health - i;
    }
    infector(std::string nm, int hpp) {
        this->name = nm;
        this->hp = hpp;
    }
    ~infector() {
        cout << this->name << " You finish off Kevin and enter the day care in which you find your son and\n hide your son to keep him safe" << std::endl;
    }

};

int main()
{
string s;
    int uin;
    // Loop game
    char replay = 'Y';

    while (replay == 'y' || replay == 'Y') {
        intro();
        
        
        // Search the room before horde comes
        //create a help menu
        cout << "You enter room quickly find that the door before is locked you need to find the code" << endl;
        cout << "Press 1 to search desks or 2 to search bodies: ";
        cin >> Choice;
        if (Choice == 1) {
            cout << "You searched the desks and found nothing\n";
        }
        else if (Choice == 2) {
            cout << "You searched the bodies and found the code *101*\n";
            while (password != ps, i < 3) {
                // password
                // create a help
                // Passing the door and encoutering Kevin
                cout << "Number of attempts #" << j << endl;
                cout << "Enter password: ";
                cin >> ps;
                i++;
                j++;

                if (password != ps) {
                    cout << "Please try again.. \n";
                    cout << endl;
                }
                else {
                    ps = "101"; i = 3;
                }
                // Must input password in order to processed
                if (password == ps) {
                    cout << "*Access Granted* You quickly ran through the door breaking the panel behind you\n";
                    Human alive("Kevin");
                    cout << "Calm down I'm human not one of those things. My name is- *Before finish your sentence a\n creature lacks onto kevin drilling a hole in his head turning him into a undead*" << endl;
                    // Undead kevin damage
                    infector u1("*Undead*", 21);
                    //Players damage
                    infector u2("Kevin", 30);
                    while (u1.health > 0 && u2.health > 0) {
                        u1.takeDamage(u2.attack());
                        u2.takeDamage(u1.attack());
                    }
                    if (u1.health <= 0) {
                        cout << "Kevin has turned\n";
                    }
                    if (u2.health <= 25) {
                        cout << "You get ready to fight\n";
                    }
                    return 0;
                }
                else {
                    cout << "The horde is coming closer..\n";
                }
                
            }
        }
        else {
            cout << "Really you could of just picked 1 or 2 the horde flood the room";
            exit(1);
        }
    }// end loop
    cout << "Hope you enjoyed." << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
