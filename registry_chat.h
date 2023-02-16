#pragma once
#include <string>
using namespace std;

class registry_chat
{
private:
	const string login_;
	string password_;
	string name_;


public:
	registry_chat(const string& login, const string& password, const string& name): login_(login),password_(password), name_(name){}

	const string& getUsreLogin() const { return login_; }

	const string getUserPassword() const { return password_; }
	void setUserPassword(const string& password) { password_ = password; }

	const string getUserName() const { return name_; }
	void setUserName(const string& name) { name_ = name; }

};

