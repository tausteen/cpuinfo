#include <hwinfo/cpu.h>

int main(int argc, char **argv)
{
    hwinfo::CPU cpu;

    std::string & modelName = cpu.modelName();
    if (modelName.empty())
    {
        return 1;
    }
    return 0;
}
