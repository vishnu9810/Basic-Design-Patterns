#pragma once

#include "Subscriber.h"
#include <list>
#include <unordered_map>

typedef void (*notifyCb) (void*, std::string);

class Publisher
{
	Publisher();
	~Publisher() = default;
	Publisher(Publisher const&) = delete;
	Publisher operator=(Publisher const&) = delete;
public:
	static Publisher* GetInstance();
	void Subscribe(Subscriber* pSubscriber, notifyCb pCallbackFn);
	void Unsubscribe(Subscriber* pSubscriber);
	void NotifySubscribers();

private:
	std::list<Subscriber*> m_subscribersList;
	std::unordered_map<Subscriber*, notifyCb> m_subscribersCbMap;
};