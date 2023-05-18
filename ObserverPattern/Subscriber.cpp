#include "Subscriber.h"

Subscriber::Subscriber(int pUid)
{
	m_userId = pUid;
}

void Subscriber::ReceiveEvent(void* pData, std::string pMsg)
{
	if (pData == nullptr)
	{
		std::cout << "received data is null" << std::endl;
		return;
	}
	Subscriber* pThis = static_cast<Subscriber*> (pData);
	std::cout << "event received at user " << pThis->m_userId << ": " << pMsg << std::endl;
}