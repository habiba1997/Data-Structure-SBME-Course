 #include <iostream>
 #include <cmath>
 #include <algorithm>
 
 #include "my_header.hpp"
 
 int main ( int argc , char **argv )
 {
     
       double a1 = std::atof(argv[1]);
       double b1 = std::atof(argv[2]);
        double a2 = std::atof(argv[3]);
        double b2 = std::atof(argv[4]);
        
        Point one={.x=a1,.y=b1};
        Point two={.x=a2,.y=b2};

        double d = distance (one , two );
    std::cout << d;
 }