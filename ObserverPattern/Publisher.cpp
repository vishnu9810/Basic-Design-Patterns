#include "Publisher.h"
#include <thread>
#include <chrono>

Publisher::Publisher()
{
	m_subscribersList.clear();
	m_subscribersCbMap.clear();
}

Publisher* Publisher::GetInstance()
{
	static Publisher instance;
	return &instance;
}

void Publisher::Subscribe(Subscriber* pSubscriber, notifyCb pCallbackFn)
{
	m_subscribersList.push_back(pSubscriber);
	m_subscribersCbMap.insert(std::make_pair(pSubscriber, pCallbackFn));
}

void Publisher::Unsubscribe(Subscriber* pSubscriber)
{
	m_subscribersCbMap.erase(pSubscriber);
	m_subscribersList.remove(pSubscriber);
}

void Publisher::NotifySubscribers()
{
	int counter = 0;
	while (counter < 100)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		counter++;
		std::cout << "time elapsed: " << counter << " seconds" << std::endl;
		std::cout << "sending event to subscribers" << std::endl;
		for (auto itr : m_subscribersList)
		{
			std::string msg = "elapsed " + std::to_string(counter) + " seconds";
			if (m_subscribersCbMap.find(itr) != m_subscribersCbMap.end())
			{
				notifyCb callbackFn = m_subscribersCbMap[itr];
				(*callbackFn)(itr, msg);
			}
		}
		std::cout << std::endl;
	}
}