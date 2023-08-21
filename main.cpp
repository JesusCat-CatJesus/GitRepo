#include <iostream>
#include <thread>
int main () {
    std::cout<<"dassax"<<std::endl;
    std::cout<<"karides"<<std::endl;
    std::cout<<"sut"<<std::endl;
    std::cout<<"balix"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::cout<<"#dassaximizin salina"<<std::endl;
    return 0;
}
