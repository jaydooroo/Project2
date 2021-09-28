//
// Created by ejh61 on 2021-09-25.
//

#ifndef PROJECT1_STARTER_CODE_PARAMETER_H
#define PROJECT1_STARTER_CODE_PARAMETER_H
#include <string>
#include <sstream>

class Parameter {
private:
    std::string ID;
    std::string STRING;

    std::string choice;
public:

    Parameter(std::string tempChoice, std::string tempString): choice(tempChoice) {
        if (choice == "STRING" ) {
            STRING = tempString;
        }
        else {
             ID = tempString;
        }
    }

    ~Parameter() {}

    std::string toString() {
        std::ostringstream oss;
        if (choice == "STRING") {
            oss << STRING;
        }
        else {
            oss << ID;
        }

        return oss.str();
    }


};


#endif //PROJECT1_STARTER_CODE_PARAMETER_H
