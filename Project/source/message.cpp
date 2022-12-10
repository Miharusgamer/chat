#pragma once
#include "message.h"

Message::Message(std::string& message_content, User& sender)
	:m_content(message_content),m_sender(sender)
{
}

std::string_view Message::getMessage() const
{
	return m_content;
}

User& Message::getSender() const
{
	return m_sender;
}

PrivateMessage::PrivateMessage(std::string& messageContent, User& sender, User& reciever)
	:Message(messageContent,sender),m_reciever(reciever)
{

}

std::string_view PrivateMessage::getMessage(User& reciepient)
{
	if (reciepient == m_reciever || reciepient == this->getSender())
		return Message::getMessage();

	return "Access denied";
}
