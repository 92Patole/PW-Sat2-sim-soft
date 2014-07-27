#ifndef SOLARPANEL_H
#define SOLARPANEL_H

/**
How it should work summary:
- how much solar power it's obtainning based on real position from RealOrbitPosition class
- temperature calculated based on power of solar rays
- model of good polarization and efficiency depending on it

*/
class SolarPanel
{
    public:
        /** Default constructor */
        SolarPanel();
        /** Default destructor */
        virtual ~SolarPanel();
        /** Access efficiency
         * \return The current value of efficiency
         */
        float Getefficiency() { return efficiency; }
        /** Set efficiency
         * \param val New value to set
         */
        void Setefficiency(float val) { efficiency = val; }
        /** Access current_solarrays_power
         * \return The current value of current_solarrays_power
         */
        float Getcurrent_solarrays_power() { return current_solarrays_power; }
        /** Set current_solarrays_power
         * \param val New value to set
         */
        void Setcurrent_solarrays_power(float val) { current_solarrays_power = val; }
        void updateSolarPanel();
    protected:
    private:
        float efficiency; //!< Member variable "efficiency"
        float current_solarrays_power; //!< Member variable "current_solarrays_power"
        float current_polarization_voltage; //!< Member variable "current_polarization_voltage"
        float current_temperature; //!< Member variable "current_temperature"
};

#endif // SOLARPANEL_H
