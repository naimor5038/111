#include "CurrentConditionDisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay(Subject* weatherData) {
	this->weatherData = weatherData;
	weatherData->registerObserver(this);
}

void CurrentConditionDisplay::update(float temperature, float humidity, float pressure) {
	this->temperature - temperature;
	this->humidity - humidity;
	display();
}

void CurrentConditionDisplay::display() {
	cout << "Current conditions: " << temperature << "C degrees and "
		<< humidity << "% humidity." << endl;
}