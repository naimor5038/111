#include "WeatherData.h"
#include "CurrentConditionDisplay.h"

int main() {
	WeatherData* weatherdata = new WeatherData();
	CurrentConditionDisplay* current = new CurrentConditionDisplay(weatherData);

	current->update(-11, 40, 760);
	current->update(-12, 45, 765);
	current->update(-14, 49, 769);

	return 0;
}