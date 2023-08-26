#include <hwinfo/cpu.h>

#include <iomanip>
#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "----------------------------------- CPU INFO -----------------------------------" << std::endl;
    auto sockets = hwinfo::getAllSockets();
    for (auto &s : sockets)
    {
        const auto &cpu = s.CPU();
        std::cout << std::left << std::setw(20) << " model:";
        std::cout << cpu.modelName() << std::endl;
        std::cout << std::left << std::setw(20) << " physical cores:";
        std::cout << cpu.numPhysicalCores() << std::endl;
        std::cout << std::left << std::setw(20) << " logical cores:";
        std::cout << cpu.numLogicalCores() << std::endl;
        std::cout << std::left << std::setw(20) << " max frequency:";
        std::cout << cpu.maxClockSpeed_MHz() << std::endl;
        std::cout << std::left << std::setw(20) << " regular frequency:";
        std::cout << cpu.regularClockSpeed_MHz() << std::endl;
        std::cout << std::left << std::setw(20) << " min frequency:";
        std::cout << cpu.minClockSpeed_MHz() << std::endl;
        std::cout << std::left << std::setw(20) << " current frequency:";
        std::cout << cpu.currentClockSpeed_MHz() << std::endl;
    }
}
