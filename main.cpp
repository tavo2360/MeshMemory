#include <cstdlib>
#include <iostream>
#include "xReference.h"
#include "API.h"
#include "enumValues.h"

using namespace std;
/*
 * 
 */
int main() {    

    API* prueba3 = new API();
    
    char ip[] = "190.101.101";
    
    prueba3->initialize(ip, 2400);
    
    prueba3->setToken(1);
    //prueba3->xMalloc2<int>(10,'i');
    
    return 0;
}

