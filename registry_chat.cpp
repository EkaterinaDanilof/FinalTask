#include "registry_chat.h"

#include <iostream>
#include <locale.h> 
#include <cstdlib>
#include <string>;
#include "chat_menu.h"
using namespace std;

void registry_chat()
{
	cout << "Registry 2" << endl;
	return ;
}

void registry_chat::reg_user()
{
	string login , password, name;
	cout << "enter your login: ";
	cin >> login;
	cout << "enter your password: ";
	cin >> password;
	cout << "enter your name: ";
	cin >> name;

	if (/*массив всех логинов*/) { throw LoginErr; }
	if (/*name*/) { throw NameErr; }

	registry_chat user = registry_chat(login, password, name);
	users.push_back(user);
}
