#ifndef DNA_HPP
#define DNA_HPP

#include "arrays.hpp"

namespace dna
{
char complementaryBase(char base)
{
    switch (base)
    {
    case 'T':
    {
        return 'A';
    }
    break;
    case 'A':
    {
        return 'T';
    }
    break;
    case 'C':
    {
        return 'G';
    }
    break;
    case 'G':
    {
        return 'C';
    }
    break;
    default:
    {
        return '0'; // to show the compiler (me) that there is an error
    }
    break;
    }
}
char *complementarySequence(char *base, int size)
{
    int b = 0;    // counter for base array
    int c = size; // counter for complementaryDNA array
    char *complementaryDNA = new char[size];
    while (b < size && c > 0) // It will make no difference if i made the condition dependent on either of them or both (means that i could use && or || no difference)
    {
        complementaryDNA[c] = complementaryBase(base[b]);
        ++b;
        --c;
    }

    return complementaryDNA;
}
char *analyzeDNA(char *base, int size, int &countA, int &countC, int &countG, int &countT)
{
    countA = array ::countCharacter(&base[0], size, 'A');
    countC = array ::countCharacter(&base[0], size, 'C');
    countG = array ::countCharacter(&base[0], size, 'G');
    countT = array ::countCharacter(&base[0], size, 'T');

    return complementarySequence(&base[0], size);
}

using DNArray = array::CharacterArray;

struct Sequence
{
    int countA;
    int countT;
    int countC;
    int countG;
    char *complementarySeq;
};
Sequence analyzeDNA(DNArray dna)
{
    Sequence counter; // counter : name object of struct sequence that will be returned by this function
    counter.complementarySeq = analyzeDNA(&dna.base[0], dna.size, counter.countA, counter.countT, counter.countC, counter.countG);
    return counter;
}
}

#endif // DNA_HPP
