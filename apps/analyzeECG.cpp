#include "ecg.hpp"     // for ecg::analyzeECG
#include "helpersarray.hpp" // for helpers::loadECG

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid usage!" << std::endl;
        return 1; // why would it return 1 and where would it return it ??
    }
    else
    {
        // Part 1

        int size = 0;
        double *ecgArray = helpersarray::getECG(argv[1], size);

        double average = 0, standardDev = 0, max = 0, min = 0;
        ecg::analyzeECG(&ecgArray[0], size, average, standardDev, max, min);

        std::cout << "ECG average : " << average << std::endl;
        std::cout << "ECG variance: " << standardDev << std::endl;
        std::cout << "ECG range   : (" << min << "," << max << ")" << std::endl;

        //Part 2 ------------------------------------------------------------------------------

        ecg::ECGArray ecg = {.base = &ecgArray[0], .size = size}; // OR I can Use ecg::ECGArray ecg = {ecgArray, size}

        ecg::Statistics stats = {.mean = average, .variance = standardDev, .min = min, .max = max};
        //stats is Initialized With the results of Part 1

        std::cout << "ECG average : " << stats.mean << std::endl;
        std::cout << "ECG variance: " << stats.variance << std::endl;
        std::cout << "ECG range   : (" << stats.min << "," << stats.max << ")" << std::endl;

        delete[] ecgArray;
        return 0;
    }
}
