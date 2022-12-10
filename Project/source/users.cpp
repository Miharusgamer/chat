#pragma once
#include "users.h"

bool User::changePassword(std::string& currentPassword, std::string& newPassword)
{
	if (m_password != currentPassword)
		return false;

	m_password = newPassword;
	return true;
}

bool User::changeUsername(std::string& currentPassword, std::string& newUsername)
{
	if (m_password != currentPassword)
		return false;

	m_username = newUsername;
	return true;
}

bool User::login(std::string& password)
{
	return password == m_password ? true : false;
}

std::string User::getUsername() const
{
	return m_username;
}

std::string User::getLogin() const
{
	return m_password;
}

bool User::operator==(User& other) const
{
	if (this->m_password == other.m_password && this->m_login == other.m_login && this->m_username == other.m_username)
		return true;

	return false;
}

User::User(std::string& login, std::string& password, std::string& username)
	:m_login(login),m_password(password),m_username(username)
{
	/*
	std::string isEmpty = std::string(); //ugly for memory allocation, but more readable than using c_str \0 check

	if (login == isEmpty)
		throw 1;
	if (username == isEmpty)
		throw 2;
	if (password == isEmpty)
		throw 3;
	*/
	//todo expections if non-valid values
	//possibly will be removed, as frontend can handle this
	
}
