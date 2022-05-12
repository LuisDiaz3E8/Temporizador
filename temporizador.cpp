#include<iostream>
#include<thread>
#include<chrono>


int main()
{
     using namespace std::chrono_literals;
     int minutos;
     std::cout<<"Introdusca la antidad de minutos deseadas:\n";
     std::cin>>minutos;
     int cuenta = minutos*60;
    //std::cout << "Hello waiter\n" << std::flush;
    //auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1000ms);
    //auto end = std::chrono::high_resolution_clock::now();
    //std::chrono::duration<double, std::milli> elapsed = end-start;
    //std::cout << "Waited " << elapsed.count() << " ms\n";

    while (cuenta >= 1)
    {
        std::cout<<"Tiempo restante: "<< cuenta<<" segundos"<< std::endl;
        std::this_thread::sleep_for(1000ms);
        --cuenta;
    }
    
    
    
}