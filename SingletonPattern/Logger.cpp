#include "Logger.h"

Logger* Logger::m_pInstance = nullptr;
int Logger::m_instanceCounter = 0;
std::mutex Logger::m_mutex;

Logger::Logger()
{
	m_instanceCounter++;// to track number of instances created
	std::cout << "this is instance no. " << m_instanceCounter << std::endl;
}

Logger* Logger::GetInstance()
{
	if (m_pInstance == nullptr)
	{
		m_mutex.lock();// remove the lock and check for yourself how multiple instances are created
		if (m_pInstance == nullptr)// double check is necessary to ensure no two threads create instance simultaneously
		{
			m_pInstance = new Logger();
		}
		m_mutex.unlock();
	}
	return m_pInstance;
}

void Logger::LogMessage(EMSGTYPE pMsgType, std::string pMsg, int pUserId)
{
	m_mutex.lock();// lock required to ensure entire log is captured without any discontinuity
	if (pMsgType == INFO)
		std::cout << "this is a info msg ";
	else if(pMsgType == WARN)
		std::cout << "this is a warning msg ";
	else if(pMsgType == ERROR)
		std::cout << "this is an error msg ";
	std::cout << "logged by user " << pUserId << " and the message is:" << std::endl << pMsg << std::endl;
	m_mutex.unlock();
}