#include <stddef.h>

#include "API.h"


API::API() {    
}

void API::setToken(char* tk) {
    this->token = tk;
}


char* API::initialize(char* host, int port) {    
    //solicitar a mesh men manager un token
    //host: IP de Mesh Men manager
    //port: Puerto al que se conectara
    //this->token = valor del token regresado por MMM    
}

template<typename T>
xReference<T> API::xMalloc2(int size, enumValue::xType type) {
    switch(type){
        case xInt:
            xReference<int>* xInt = new xReference<int>;
            xInt->meshCall(size, type);
            xIntp = xInt;
    }
    return xIntp;
}
//
//
//template<typename T>
//xReference<T> API::xMalloc(int size, xType type) {
//    switch(type){       
//        case xInt:
//            xReference<int>* xInt = new xReference<T>;
//            return xInt;
//        case xChar:
//            xReference<char>* xChar = new xReference<T>;
//            return xChar;
//        case xDouble:
//            xReference<double>* xDouble = new xReference<T>;
//            return xDouble;
//        case xBool:
//            xReference<bool>* xBool = new xReference<T>;
//            return xBool;
//    }    
//    //xReference<type>* prueba = new xReference<T>;
//    //instancia->setSize(size);
//    //return prueba;
//    //Retorna una instancia de xReference
//}
//
//template<typename T>
//xReference<T> API::xMalloc(int size, xType type, void* value) {
//    //Retorna una instancia de xReference
//}
//
//
template<typename T>
void API::xAssing(xReference<T> reference, void* value) {
    reference.assingValue(value);
    delete value;
    //Asigna el valor de value al espacio apuntado por reference
    //luego libera la memoria de value    
}

template<typename T>
void API::xFree(xReference<T> toFree) {
    //Cantacta a Mesh Mem Manager para liberar espacio de toFree
}


API::~API() {
}

