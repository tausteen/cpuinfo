#include <hwinfo/cpu.h>

int main(int argc, char **argv)
{
    hwinfo::CPU cpu;

    int maxClockSpeed_kHz = cpu.maxClockSpeed_kHz();
    if (maxClockSpeed_kHz == -1)
    {
        return 1;
    }

    int regularClockSpeed_kHz = cpu.regularClockSpeed_kHz();
    if (regularClockSpeed_kHz == -1)
    {
        return 1;
    }

    int currentClockSpeed_kHz = hwinfo::CPU::currentClockSpeed_kHz();
    if (currentClockSpeed_kHz == -1)
    {
        return 1;
    }
    return 0;
}
