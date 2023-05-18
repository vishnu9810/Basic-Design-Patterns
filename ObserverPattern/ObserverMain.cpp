#include <iostream>
#include "Subscriber.h"
#include "Publisher.h"

int main()
{
	std::cout << "we're gonna implement the observer design pattern today" << std::endl;

	Subscriber* subscriber1 = new Subscriber(1);
	Subscriber* subscriber2 = new Subscriber(2);
	Subscriber* subscriber3 = new Subscriber(3);

	Publisher::GetInstance()->Subscribe(subscriber1, Subscriber::ReceiveEvent);
	Publisher::GetInstance()->Subscribe(subscriber2, Subscriber::ReceiveEvent);
	Publisher::GetInstance()->Subscribe(subscriber3, Subscriber::ReceiveEvent);

	Publisher::GetInstance()->NotifySubscribers();

	Publisher::GetInstance()->Unsubscribe(subscriber1);
	Publisher::GetInstance()->Unsubscribe(subscriber2);
	Publisher::GetInstance()->Unsubscribe(subscriber3);

	delete subscriber1;
	delete subscriber2;
	delete subscriber3;

	return 0;
}