#include <iostream>
#include "Celsius.h"

#ifndef FAHRENHEIT_H
#define FAHRENHEIT_H

class Fahrenheit {
public:
	explicit Fahrenheit(double temperature)
		:m_temperature(temperature)
	{}

	explicit Fahrenheit(Celsius & celsius)
	{
		m_temperature = ((celsius.getTemperature() * 9) / 5) + 32;
	}

	double getTemperature() const;

	friend std::ostream& operator<<(std::ostream& os, const Fahrenheit& fahrenheit);

	void print();

private:
	double m_temperature;
};

#endif