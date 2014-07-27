#include "DataOperator.h"
#include "AdcsModule.h"
#include "CommModule.h"

DataOperator::DataOperator()
{
    modules.push_back(new EpsModule);
    modules.push_back(new AdcsModule); // for now we only add 1 module that takes 4W




}

DataOperator::~DataOperator()
{
    for ( int i=0; i<modules.size(); i++)
        delete modules[i];
}
void DataOperator::iterateAllModules()
{
    float neeed_energy=0;
    for(int i=0; i<modules.size(); i++)
    {
        modules[i]->updateIteration();
        neeed_energy += ((float)(modules[i]->getPowerConsumption())) / (3.6 *5) ;// [w] -> mAh ref to 5V;
    }
    // Eps module shiuld be always the first
    ((EpsModule*)modules[0])->obtain_energy(neeed_energy);
    energy_budget = ((EpsModule*)modules[0])->getEnergyLevel();

}

void DataOperator::setPowerConsumption(unsigned int i, float powerC)
{
    if(i < modules.size())
        modules[i]->setPowerConsumption(powerC);
}
