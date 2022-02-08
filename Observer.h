#pragma once
class Observer {
public:
	virtual void update(float temperature, float humidity, float pressure) = 0;
};
