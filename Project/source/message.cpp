#pragma once
#include "message.h"

Message::Message(std::string& message_content, User& sender)
	:m_content(message_content),m_sender(sender)
{
}

PublicMessage::PublicMessage(std::string& message, User& sender)
	:Message(message,sender)
{
}
