#include <iostream>
#include "crow.h"
#include "Video.cpp"
#include <string>

using std::string;

typedef std::vector<std::pair<std::string, int>> map_t;

namespace first
{
    string name = "suuusiii";
    map_t newMap;
    std::vector<int> intVector;
    int *age;

    void printS()
    {
        std::cout << name;
    }
    void pushBack(int number)
    {
        intVector.push_back(number);
    }
    std::vector<string> swap(std::vector<string> vector, int i, int j)
    {
        string tmp = vector[i];
        vector[i] = vector[j];
        vector[j] = tmp;
        return vector;
    }
    void newObj()
    {
        std::cout << "sui";
    }

}
int main()
{
    // crow::SimpleApp app;
    // app.port(18080).multithreaded().run();
    // Video video ("hallo","hallo","hallo","hallo","hallo");
    // std::cout << video.getTitle();
    std::cout << "Hallo\n";
    first::printS();
    int numberInput = 0;
    std::cin >> numberInput;
    first::pushBack(numberInput);
    first::age = &numberInput;
    int &MyAge = *first::age;
    std::cout << MyAge << std::endl;
    std::vector<string> stringVector;
    stringVector.push_back("sadfsdf");
    stringVector.push_back("abc");
    stringVector = first::swap(stringVector, 0, 1);
    for (int i = 0; i < stringVector.size(); i++)
    {
        std::cout << stringVector[i] << std::endl;
    }
}