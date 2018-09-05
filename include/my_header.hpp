#include<iostream>

struct Point
{
    double x;
    double y;
};
double distance ( Point a , Point b)
{
   return  std::sqrt(((a.x-b.x)*(a.x-b.x)) + ((a.y-b.y)*(a.y-b.y)) ); 
}