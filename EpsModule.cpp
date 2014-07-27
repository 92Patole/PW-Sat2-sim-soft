#include "EpsModule.h"
#include "cstdlib"
EpsModule::EpsModule()
{
    //adding 4 accumulators
    for(int i=0; i<4; i++)          // 4 batteires
    {
        batteries.push_back(Accumulator());
        batteries[i].charge(1000);
    }
    for(int i=0; i<8; i++)         // 8 solar panels
        solars.push_back(SolarPanel());
    total_energy=1000;

    //ctor
}

EpsModule::~EpsModule()
{
    //dtor
}

void EpsModule::updateIteration()
{
    float obtainedEnergy=0;
    // get energy from solars
    for(int i=0; i<solars.size(); i++)
    {
        solars[i].updateSolarPanel();
        obtainedEnergy +=solars[i].Getcurrent_solarrays_power() * single_iteration_time / (5 * 3,6) ; // we charge batteries with mAh
        // 5V *  3600 s
    }
    for(int i=0; i<batteries.size(); i++)
           batteries[i].charge(obtainedEnergy/batteries.size());
    updateTotalEnergy();
}

float EpsModule::getPowerConsumption()
{
    return 0; // 0 Watt
}

void EpsModule::obtain_energy(float energy)
{
    total_energy=0;
    for(int i=0; i<batteries.size(); i++)
       batteries[i].discharge(energy/batteries.size());
    updateTotalEnergy();

};

void EpsModule::updateTotalEnergy()
{
    total_energy=0;
    for(int i=0; i<batteries.size(); i++)
        total_energy += batteries[i].Getcurrent_energy_level();

}
