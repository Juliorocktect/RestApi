#include <iostream>
#include "crow.h"
#include "Video.cpp"
#include <string>

using std::string;

typedef std::vector<std::pair<std::string, int>> map_t;

namespace first {
    string name = "suuusiii";
    map_t  newMap;
    std::vector<int> intVector;
    int *age;
    
    void printS() {
        std::cout << name;
    }
    void pushBack(int number) {
        intVector.push_back(number);
    }


}
int main()
{
    //crow::SimpleApp app;
    //app.port(18080).multithreaded().run();
    //Video video ("hallo","hallo","hallo","hallo","hallo");
    //std::cout << video.getTitle();
    std::cout << "Hallo\n";
    first::printS();
    int numberInput = 0;
    std::cin >> numberInput;
    first::pushBack(numberInput);
    first::age = &numberInput;
    int& MyAge = *first::age;
    std::cout << MyAge;
    return 0;
}