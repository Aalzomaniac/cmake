#include "iostream"
#include "add.h"

extern int a;
int main(){
    std::cout<<"Entered Main "<<std::endl;
    pthread_t thread1;
    pthread_t thread2;

    pthread_create(&thread1,NULL,Mcyclic,NULL);
    pthread_create(&thread2,NULL,read_a,NULL);
//     std::cout<<"Enter a "<<std::endl;
//     std::cin>>a;
//     std::cout<<"Exited Main "<<std::endl;
while(!a){

//loop while setting flag
}
std::cout<<"Exiter was received a = "<<a<<std::endl;
}
