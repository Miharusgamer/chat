#pragma once
#include <string>
class User
{
public:
	bool changePassword(std::string& currentPassword, std::string& newPassword);
	bool changeUsername(std::string& currentPassword, std::string& newUsername);
	bool login(std::string& password);
	std::string getUsername() const;
	std::string getLogin() const;

public:
	User() = delete;
	User(std::string& login, std::string& username, std::string& password);
	~User() = default;

private:
	const std::string& m_login;
	std::string& m_password;
	std::string& m_username;
};