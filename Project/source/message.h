#pragma once
#include <string>
#include "users.h"
class Message
{
public:
	Message() = delete;
	Message(std::string& message_content, User& sender);
	~Message() = default;
public:
	virtual std::string_view getMessage() const;
	User& getSender() const;
private:
	std::string& m_content;
	User& m_sender;
};

class PrivateMessage : private Message
{
public:
	PrivateMessage() = delete;
	PrivateMessage(std::string& messageContent, User& sender, User& reciever);
	~PrivateMessage() = default;
public:
	std::string_view getMessage(User& reciepient);
private:
	User m_reciever;
};