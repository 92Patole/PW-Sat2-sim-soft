#ifndef EPSMODULE_H
#define EPSMODULE_H

#include <Module.h>
#include <Accumulator.h>
#include <SolarPanel.h>
#include <vector>
/**
How it should work summary:
- should simulate efficiency of power processing and return power obtained
- should simulate EPS power division logic ( when to turn off charging, when to cut off volt)

*/
class EpsModule : public Module
{
    public:
        /** Default constructor */
        EpsModule();
        /** Default destructor */
        virtual ~EpsModule();
    protected:
    private:
        unsigned int state_of_power; //!< Member variable "state_of_power"
        std::vector<Accumulator> batteries; //!< Member variable "batteries"
        std::vector<SolarPanel> solars; //!< Member variable "solars"
};

#endif // EPSMODULE_H
