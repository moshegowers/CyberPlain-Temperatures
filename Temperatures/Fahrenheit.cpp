#include "Fahrenheit.h"
#include "Celsius.h"

std::ostream & operator<<(std::ostream & os, const Fahrenheit &fahrenheit)
{
	os << reinterpret_cast<const Celsius*>(&fahrenheit)->getTemperature() << " C, " <<
		fahrenheit.getTemperature() << " F" <<
		std::endl;
	return os;
}

double Fahrenheit::getTemperature() const
{
	return m_temperature;
}

void Fahrenheit::print()
{
	std::cout << this;
}
