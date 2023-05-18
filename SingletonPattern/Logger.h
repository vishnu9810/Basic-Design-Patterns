#pragma once

#include <iostream>
#include <string>
#include <mutex>

enum EMSGTYPE
{
	INFO = 0,
	WARN,
	ERROR
};

class Logger
{
	Logger();
	~Logger() = default;

public:
	void operator=(Logger const&) = delete;
	Logger(Logger const&) = delete;

	static Logger* GetInstance();
	void LogMessage(EMSGTYPE pMsgType, std::string pMsg, int pUserId);

private:
	static Logger* m_pInstance;
	static int m_instanceCounter;
	static std::mutex m_mutex;
};