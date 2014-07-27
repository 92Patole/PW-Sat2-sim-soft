#ifndef ADCSMODULE_H
#define ADCSMODULE_H

#include <Module.h>

/**
 How it should work summary:
- simulations of position results
- simulations of power consumption
- simulations of orientation corrections (how fast per time iteration)
 */
class AdcsModule : public Module
{
    public:
        /** Default constructor */
        AdcsModule();
        /** Default destructor */
        virtual ~AdcsModule();
        /** Access state_of_correction
         * \return The current value of state_of_correction
         */
        unsigned int enum Getstate_of_correction() { return state_of_correction; }
        /** Set state_of_correction
         * \param val New value to set
         */
        void Setstate_of_correction(unsigned int enum val) { state_of_correction = val; }
        /** Access results_of_position
         * \return The current value of results_of_position
         */
        float Getresults_of_position() { return results_of_position; }
    protected:
    private:
        unsigned int enum state_of_correction; //!< Member variable "state_of_correction"
        float results_of_position; //!< Member variable "results_of_position"
};

#endif // ADCSMODULE_H
