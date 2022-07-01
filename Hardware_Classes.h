#ifndef WIN32_PROCESSOR_H
#define WIN32_PROCESSOR_H

#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "json.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;

nlohmann::ordered_json Hardware_Classes(const char* filename);

#endif