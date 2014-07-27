#include "SolarPanel.h"
#include <cstdlib>
SolarPanel::SolarPanel()
{
    //ctor
    efficiency = 0.25; //!< Member variable "efficiency"
    current_solarrays_power = 0.0; //!< Member variable "current_solarrays_power"
    current_polarization_voltage = 5.0; //!< Member variable "current_polarization_voltage"
    current_temperature = 25.0;
}

SolarPanel::~SolarPanel()
{
    //dtor
}

void SolarPanel::updateSolarPanel() // solar panels power in Watts , max 1 W per panel
{
    current_solarrays_power = efficiency * ((float)(std::rand() % 100)) / 100; // generate random number from 0.00 to 1.00 W
}
