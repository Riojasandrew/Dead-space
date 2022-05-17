#include "Human.h"
#include <iostream>
#include <string>
using namespace std;

string name = "Kevin";

Human::Human(std::string name) {
	this->name = name;
	cout << name + ": Ahhh leave me alone don't turn me into one of them..! *You notice them shaking in fear*" << endl;
}