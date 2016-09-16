#include "API.h"


API::API() {
    this->token = 0;    
}

void API::setToken(int tk) {
    this->token = tk;
}


char* API::initialize(char* host, int port) {    
    //solicitar a mesh men manager un token
    //host: IP de Mesh Men manager
    //port: Puerto al que se conectara
    //this->token = valor del token regresado por MMM
    this->token = 24;
}

//template<typename T>
//xReference<T> API::xMalloc2(int size, enumValue::xType type) {
//    switch(type){
//        case xInt:
//            xReference<int>* xInt = new xReference<int>;
//            xInt->setSize(size);
//            xIntp = xInt;
//    }
//    return xIntp;
//}
//
//
//template<typename T>
//xReference<T> API::xMalloc(int size, xType type) {
//    switch(type){       
//        case xInt:
//            xReference<int>* xInt = new xReference<T>;
//            xInt->setSize(size);
//            return xInt;
//        case xChar:
//            xReference<char>* xChar = new xReference<T>;
//            xChar->setSize(size);
//            return xChar;
//        case xDouble:
//            xReference<double>* xDouble = new xReference<T>;
//            xDouble->setSize(size);
//            return xDouble;
//        case xBool:
//            xReference<bool>* xBool = new xReference<T>;
//            xBool->setSize(size);
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
//template<typename T>
//void API::xAssing(xReference<T> reference, void* value) {
//    //Asigna el valor de value al espacio apuntado por reference
//    //luego libera la memoria de value    
//}
//
//template<typename T>
//void API::xFree(xReference<T> toFree) {
//    //Cantacta a Mesh Men Manager para liberar espacio de toFree
//}


API::~API() {
}

