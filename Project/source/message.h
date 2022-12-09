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
	virtual std::string_view getMessage() = 0;
private:
	std::string& m_content;
	User& m_sender;
};
class PublicMessage : public Message
{
public:
	PublicMessage() = delete;
	PublicMessage(std::string& message, User& sender);
	~PublicMessage() = default;
};

class PrivateMessage : public Message
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