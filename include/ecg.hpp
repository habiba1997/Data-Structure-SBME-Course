#ifndef ECG_HPP
#define ECG_HPP
#include "arrays.hpp"
namespace ecg
{
void analyzeECG(double *base, int arraySize, double &mean, double &variance, double &max, double &min)
{
    // this function computes the average, variance, max, and min of ECG signal.
    mean = array ::meanArray(&base[0], arraySize);
    variance = array ::varianceArray(&base[0], arraySize);
    max = array ::maxArray(&base[0], arraySize);
    min = array ::minArray(&base[0], arraySize);
}

using ECGArray = array::DoubleArray;

struct Statistics
{

    double mean;
    double variance;
    double min;
    double max;
};
Statistics analyzeECG(ECGArray ecg)
{
    Statistics analysisECG;
    analyzeECG(&ecg.base[0], ecg.size, analysisECG.mean, analysisECG.variance, analysisECG.max, analysisECG.min);
    return analysisECG;
}
}
#endif // ECG_HPP
