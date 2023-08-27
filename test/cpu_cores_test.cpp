#include <hwinfo/cpu.h>

int main(int argc, char **argv)
{
    hwinfo::CPU cpu;

    int numPhysicalCores = cpu.numPhysicalCores();
    if (numPhysicalCores == -1)
    {
        return 1;
    }

    int numLogicalCores = cpu.numLogicalCores();
    if (numLogicalCores == -1)
    {
        return 1;
    }
    return 0;
}
