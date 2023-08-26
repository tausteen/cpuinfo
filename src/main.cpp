#include <hwinfo/cpu.h>

#include <iomanip>
#include <iostream>

int main(int argc, char **argv)
{
    hwinfo::CPU cpu;
    std::cout << "--------------------------------- CPU INFO ---------------------------------" << std::endl;
    std::cout << std::left << std::setw(20) << "model:";
    std::cout << cpu.modelName() << std::endl;
    std::cout << std::left << std::setw(20) << "physical cores:";
    std::cout << cpu.numPhysicalCores() << std::endl;
    std::cout << std::left << std::setw(20) << "logical cores:";
    std::cout << cpu.numLogicalCores() << std::endl;
    std::cout << std::left << std::setw(20) << "max frequency:";
    std::cout << cpu.maxClockSpeed_kHz() << std::endl;
    std::cout << std::left << std::setw(20) << "regular frequency:";
    std::cout << cpu.regularClockSpeed_kHz() << std::endl;
    std::cout << std::left << std::setw(20) << "current frequency:";
    std::cout << hwinfo::CPU::currentClockSpeed_kHz() << std::endl;
}
