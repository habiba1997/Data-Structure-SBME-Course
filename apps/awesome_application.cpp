#include "helpers.hpp"
#include "EmmanuelandAhmad.hpp"

int main( /*int argc , char **argv*/ )
{
    //The purpose of this application is to put in order a bank's customer queue according to the membership.
    //Regular members start their order from 1.
    //Platinum members start their order from 500.
    //Everytime a platinum member is found the midst of the queue, they shall be removed and added to their own
    //separated line.
    // The most racist application ever!!!!
    
    IntQ::IntQueueLL allClients;
    IntQ::IntQueueLL regularMembers;
    IntQ::IntQueueLL platinumMembers;
    int registeredClients[700];
    int clientNumber;
    
    for(int i=0;i<=699;i++)     //700 is the maximum number of clients per day
    {
        std::cin>>registeredClients[i];
        IntQ::enqueue(allClients,registeredClients[i]); //Members registering on the internet whether regular or platinum, platinum are given numbers from 500 though.
    }
    for(int i=0;i<=699;i++)
    {
        clientNumber = IntQ::dequeue(allClients);
        if(clientNumber>=500)
        {
            IntQ::enqueue(platinumMembers,clientNumber);
        }
        else
        {
            IntQ::enqueue(regularMembers,clientNumber);
        }
    }
    std::cout<<"Serving platinum clients"<<std::endl;
    for(int i=0;i<=IntQ::size(platinumMembers);i++)
    {
        std::cout<<"Now serving client #"<<IntQ::dequeue(platinumMembers)<<std::endl;
    }
    if(IntQ::isEmpty(platinumMembers))      //All platinum members have been assisted
    {
        std::cout<<"Serving regular clients in 5 minutes";
    }
    for(int i=0;i<=IntQ::size(regularMembers);i++)
    {
        std::cout<<"Now serving client #"<<IntQ::dequeue(regularMembers)<<std::endl;
    }
    std::cout<<"Now all employees can leave, drive safely";
    return 0; 
}
