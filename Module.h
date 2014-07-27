#ifndef MODULE_H
#define MODULE_H

/** This class if an abstract class of Module  */
class Module
{
    public:
        float single_iteration_time=1; // in seconds
        float power_consumption=0;
        bool turn_on_flag = true;
        /** Default constructor */
        Module();
        /** Default destructor */
        virtual ~Module();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Module(const Module& other);
        virtual void updateIteration();
        virtual float getIterationTime() { return single_iteration_time; } ;
        virtual void setIterationTime(float time) { single_iteration_time = time; } ;
        virtual float getPowerConsumption() { return turn_on_flag ?  power_consumption:0.0; } ;
        virtual void setPowerConsumption(float power) { power_consumption=power; } ;
        virtual void turnOn(){ turn_on_flag = true; } ;
        virtual void turnOff(){ turn_on_flag = true; };
        virtual bool getTurnOnFlag(){ return turn_on_flag; };
    protected:
    private:
};

#endif // MODULE_H
