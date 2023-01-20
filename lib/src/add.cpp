#include "add.h"
#include "iostream"

int a = 0;
void * read_a(void *argument)
{ 
    while(!a){
    std::cout<<"ENTER VAL FOR A"<<std::endl;
    std::cin>>a;
    (a==0)?(std::cout<<"RES FUNC"<<std::endl):(std::cout<<"END FUNC"<<std::endl);
    }
 return 0;
}

void * Mcyclic(void *argument){ 
   std::cout<<"Entering Loop state"<<std::endl;
    while(!a){
            //std::cout<<" scoombi guys "<<std::endl;
    }
    std::cout<<"Exiting Loop state : got a = "<<a<<std::endl;
return 0;
}

