//
//  main.cpp
//  GitApp
//
//  Created by Marc Specter on 09/02/2017.
//  Copyright © 2017 Marc Specter. All rights reserved.
//

#include <iostream>
#include "UsefulFunctions.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World! Remote edit here!\n";
    cout<<"Hello from marcs laptop A SECOND TIME\n";
    
    const char* name = "MarcSpecter";
    wchar_t widebuffer[20];
    
    convert(name, widebuffer);
    wcout<<widebuffer<<endl;
    
    return 0;
}
