#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"

class CurrentConditionDisplay : public Observer, public DisplayElement {
private:
	float temperature;
	float humidity;
	Subject* weatherData;
public:
	CurrentConditionDisplay(Subject* weatherData);
	void update(float temperature, float pressure);
	void display();
};