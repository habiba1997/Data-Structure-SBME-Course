#include "/home/beebz/Habiba/include/helpersarray.hpp" // for helpers::loadDNA
#include "dna.hpp"     // for dna::analyzeDNA

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid usage!" << std::endl;
        return 1;
    }
    else
    {
        // Part 1

        int size = 0;
        char *dnaArray1 = helpersarray::getDNA(argv[1], 0, size);

        int counterA = 0, counterC = 0, counterG = 0, counterT = 0;

        char *complementarySeq = dna::analyzeDNA(&dnaArray1[0], size, counterA, counterC, counterG, counterT);

        char *complementarySeqTerminated = new char[size + 1];
        std::copy(&complementarySeq[0], &complementarySeq[size - 1], &complementarySeqTerminated[0]);
        complementarySeqTerminated[size] = '\0';
        // I didn't understand what is the USE for the previous 3 lines (Lines 25 , 26 , and 27 )

        std::cout << "Adenine (A) content:" << counterA << std::endl
                  << "Guanine (G) content:" << counterG << std::endl
                  << "Cytocine(C) content:" << counterC << std::endl
                  << "Thymine (T) content:" << counterT << std::endl
                  << std::endl
                  << "Complementary Sequence:" << std::endl
                  << complementarySeqTerminated << std::endl;

        //---------------------------------------------------------------------------
        //Part 2 (Bonus)

        dna::DNArray dna = {.base = &dnaArray1[0], .size = size};

        dna::Sequence seq = {.countA = counterA, .countT = counterT, .countC = counterC, .countG = counterG, .complementarySeq = complementarySeq};

        complementarySeqTerminated = new char[size + 1];
        std::copy(&seq.complementarySeq[0], &seq.complementarySeq[size - 1], &complementarySeqTerminated[0]);
        complementarySeqTerminated[size] = '\0';

        std::cout << "Adenine (A) content:" << seq.countA << std::endl
                  << "Guanine (G) content:" << seq.countG << std::endl
                  << "Cytocine(C) content:" << seq.countC << std::endl
                  << "Thymine (T) content:" << seq.countT << std::endl
                  << std::endl
                  << "Complementary Sequence:" << std::endl
                  << complementarySeqTerminated << std::endl;

        delete[] complementarySeq;
        delete[] complementarySeqTerminated;
        return 0;
    }
}
