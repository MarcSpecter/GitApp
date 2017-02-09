//
//  UsefulFunctions.cpp
//  GitApp
//
//  Created by Marc Specter on 09/02/2017.
//  Copyright © 2017 Marc Specter. All rights reserved.
//

#include "UsefulFunctions.hpp"
#include <stdlib.h>
#include <string.h>
//using namespace std;

void convert(const char* in, wchar_t* out){
    mbstowcs(out, in, strlen(in) );
    
    
}