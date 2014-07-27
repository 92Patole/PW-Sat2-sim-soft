#ifndef DATAOPERATOR_H
#define DATAOPERATOR_H
#include "Module.h"
#include <vector>


/**
How it should work summary:
It's a Manager that mediates between simulated modules and application, share needed values between classes.
In general, it execytes  in loop :
{
updateAllModules();        // execute calculations for this timestamp
updateState();                 // execute calculations of real values ( real position, comm )
updateView();                 // update charts etc.
time++;                           // increment timestamp
}
For every module time derivative could be different ( then, it'll not be updated every iteration, last value will be used) .
*/

class DataOperator
{
    public:
        /** Default constructor */
        DataOperator();
        /** Default destructor */
        virtual ~DataOperator();
    protected:
    private:
        double power_budget=0; //!< Member variable "power_budget"
        double current_time=0; //!< Member variable "current_time"
        std::vector<Module> modules; //!< Member variable "modules"
};

#endif // DATAOPERATOR_H
