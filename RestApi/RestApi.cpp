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




    class Roller {
    private:
        double tankgroesse, tankinhalt;
        int kilometerstand;
    public:
        Roller(double tankgroesse, int kilometerstand, double tankinhalt) {
            this->tankgroesse = tankgroesse;
            this->kilometerstand = kilometerstand;
            this->tankinhalt = tankinhalt;
        }
        ~Roller() {
            delete& tankgroesse;
        }
        void tanke(double menge) {
            if (tankgroesse < tankinhalt + menge) {
                std::cout << "Zu viel getankt";
            }
            else {
                tankinhalt + menge;
            }
        }
        double getTankinhalt() {
            return tankinhalt;
        }
    };

namespace service {
    class RollerService {
    private:

    };

}
   
    int main()
    {
        
       


    crow::SimpleApp app; //define your crow application

    //define your endpoint at the root directory
    CROW_ROUTE(app, "/")([]() {
        return "Hello world";
        });
    CROW_ROUTE(app, "/add/<int>/<int>").methods(crow::HTTPMethod::GET)
        ([](int a, int b)
            {
                return std::to_string(a + b);
            });
    CROW_ROUTE(app, "newRoller/<double>/<int>/<double>").methods(crow::HTTPMethod::POST)([](double tankinhalt, int kilometerstand, double tankgroesse)
        {
            Roller newRoller(tankinhalt, kilometerstand, tankgroesse);
        });
    CROW_ROUTE(app, "/getTankinhalt")
        ([]()
        {
            return "Sui";
        });
    //set the port, set the app to run on multiple threads, and run the app
    app.port(8080).multithreaded().run();


}
