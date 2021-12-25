#include <drogon/drogon.h>
#include <iostream>

using namespace std;

int main() {
    cout << "I have changed the REST calls" << endl;
    //Set HTTP listener address and port
    drogon::app().addListener("0.0.0.0",80).run();
    //Load config file
    //drogon::app().loadConfigFile("../config.json");
    //Run HTTP framework,the method will block in the internal event loop
    return 0;
}
