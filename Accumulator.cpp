#include "Accumulator.h"

Accumulator::Accumulator()
{
    max_capacity = 10000.0;
    current_capacity = max_capacity;
    current_energy_level = 0.0;
    current_charge_cycles = 0.0;
    max_charge_cycles = 1000;
    //ctor
}

Accumulator::~Accumulator()
{
    //dtor
}


void Accumulator::charge (float energy_in_mAh)
{

    current_energy_level += energy_in_mAh;
    if(current_energy_level > max_capacity)
        current_energy_level = max_capacity;
}

void Accumulator::discharge (float energy_in_mAh )
{
    current_energy_level -= energy_in_mAh;
    if(current_energy_level < 0)
        current_energy_level = 0;

}
