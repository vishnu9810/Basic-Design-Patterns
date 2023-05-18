#include "Logger.h"
#include <thread>

void logMessageUser1()
{
	Logger* logger = Logger::GetInstance();
	logger->LogMessage(INFO, "just saying hi :)", 1);
}

void logMessageUser2()
{
	Logger* logger = Logger::GetInstance();
	logger->LogMessage(WARN, "there seems to be some issue.. take a look and check if it is a vald issue :')", 2);
}

void logMessageUser3()
{
	Logger* logger = Logger::GetInstance();
	logger->LogMessage(ERROR, "I have found some serious issue.. you must fix it asap :(", 3);
}

int main()
{
	std::cout << "let's create a logger today" << std::endl;

	std::thread thread1(logMessageUser1);
	std::thread thread2(logMessageUser2);
	std::thread thread3(logMessageUser3);

	thread1.join();
	thread2.join();
	thread3.join();

	return 0;
}