//
// Created by asem on 01/04/18.
//
// Submitted by Habiba on 14th April 2018
//

#include "map.hpp"
#include "helpers.hpp"

int main(int argc, char **argv)
{
    int Sum= 0;
    if (argc == 2)
    {
        std::vector<std::string> words = getFileWords(argv[1]);
        map::WordMap wMap = map::create();

        for (int i = 0; i < words.size(); ++i)
            {
                map::value(wMap, words[i])++;
                Sum++;
            }
        map::printAll( wMap );
    }
    std::cout<<"sum = " << Sum << std::endl;

    return 0;
}
