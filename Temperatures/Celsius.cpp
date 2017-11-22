#include "Celsius.h"
#include "Fahrenheit.h"

std::ostream & operator<<(std::ostream & os, const Celsius &celsius)
{
	os << celsius.getTemperature() << " C, " <<
		reinterpret_cast<const Fahrenheit*>(&celsius)->getTemperature() << " F" <<
		std::endl;
	return os;
}

Celsius::Celsius(double temperature):m_temperature(temperature)
{}

double Celsius::getTemperature() const
{
	return m_temperature;
}

void Celsius::print()
{
	std::cout << this;
}
