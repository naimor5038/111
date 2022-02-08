#include "WeatherData.h"

WeatherData::WeatherData() {	

}

void WeatherData::registerObserver(Observer* o) {
	observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o) {
	auto iter = observers.begin();
	while (iter != observers.end()) {
		if (*iter == o) {
			iter = observers.erase(iter);
		}
		else {
			iter++;
		}
	}
}

void WeatherData::notifyObservers() {
	for (auto iter : observers) {
		((Observer*)iter)->update(temperature, humidity, pressure);
	}
}

void WeatherData::measurementsChanged() {
	notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humdity, float pressure) {
	this->temperature = temperature;
	this->humidity = humdity;
	this->pressure = pressure;
	measurementsChanged();
}