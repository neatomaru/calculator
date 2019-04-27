//
// Created by admin on 2019-04-27.
//

#ifndef HELLO_WORLD_SERVICES_H
#define HELLO_WORLD_SERVICES_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


class Services {
public:
    double fillOperand(char str[], vector<string> numbers)
    {

        double var, buffer;
        cin.get(str, 100);

        sscanf(str, "%lf", &buffer);
        if (buffer != 0) {
            var = buffer;
        } else {
            vector<string>::const_iterator it = find(numbers.begin(), numbers.end(), string(str));
            if (it != numbers.end()) {
                var = it - numbers.begin();


            }
        }
        cin.ignore(INT_MAX, '\n');
        return var;
    }


};


#endif //HELLO_WORLD_SERVICES_H
