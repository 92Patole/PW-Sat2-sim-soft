#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H
/**
How it should work summary:
- simulations of current capacity depending on charging cycles
- simulations of battery crash when too much energy is disposed
- simulations of energy cumulation ( voltage, current, basic characteristics )
*/

class Accumulator
{
    public:
        /** Default constructor */
        Accumulator();
        /** Default destructor */
        virtual ~Accumulator();
        /** Access max_capacity
         * \return The current value of max_capacity
         */
        float Getmax_capacity() { return max_capacity; }
        /** Access current_capacity
         * \return The current value of current_capacity
         */
        float Getcurrent_capacity() { return current_capacity; }
        /** Access current_energy_level
         * \return The current value of current_energy_level
         */
        float Getcurrent_energy_level() { return current_energy_level; }
        /** Access current_charge_cycles
         * \return The current value of current_charge_cycles
         */
        unsigned int Getcurrent_charge_cycles() { return current_charge_cycles; }
        /** Access max_charge_cycles
         * \return The current value of max_charge_cycles
         */
        unsigned int Getmax_charge_cycles() { return max_charge_cycles; }
    protected:
    private:
        float max_capacity; //!< Member variable "max_capacity"
        float current_capacity; //!< Member variable "current_capacity"
        float current_energy_level; //!< Member variable "current_energy_level"
        unsigned int current_charge_cycles; //!< Member variable "current_charge_cycles"
        unsigned int max_charge_cycles; //!< Member variable "max_charge_cycles"
};

#endif // ACCUMULATOR_H
