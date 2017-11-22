#include <iostream>

#ifndef CELSIUS_H
#define CELSIUS_H

class Celsius {
public:
	explicit Celsius(double temperature);

	double getTemperature() const;

	friend std::ostream& operator<<(std::ostream& os, const Celsius& celsius);

	void print();

private:
	double m_temperature;
};

#endif
