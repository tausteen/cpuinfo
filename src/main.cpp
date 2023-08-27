#include <hwinfo/cpu.h>

#include <iomanip>
#include <iostream>

int main(int argc, char **argv)
{
    hwinfo::CPU cpu;
    std::cout << "--------------------------------- CPU INFO ---------------------------------" << std::endl;
    std::cout << std::left << std::setw(25) << "model and frequency:";
    std::cout << cpu.modelName() << std::endl;
    std::cout << std::left << std::setw(25) << "physical cores:";
    std::cout << cpu.numPhysicalCores() << std::endl;
    std::cout << std::left << std::setw(25) << "logical cores:";
    std::cout << cpu.numLogicalCores() << std::endl;
}
