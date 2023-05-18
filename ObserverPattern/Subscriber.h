#pragma once

#include <iostream>
#include <string>

class Subscriber
{
	int m_userId;
public:
	Subscriber() = default;
	~Subscriber() = default;
	Subscriber(int pUid);
	static void ReceiveEvent(void* pData, std::string pMsg);
};