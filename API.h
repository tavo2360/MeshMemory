#ifndef API_H
#define API_H
#include "xReference.h"
#include "enumValues.h"


class API {
    
private:    
    char* token;
    xReference<int>* xIntp;
    

public:
    enum xType{
        xInt,
        xChar,
        xBool,
        xDouble,
    };
    xType type;
    API();
    
    void setToken(char* tk);
    
    char* initialize(char* host, int port);
    template<typename T>
    xReference<T> xMalloc(int size, xType type);
    template<typename T>
    xReference<T> xMalloc(int size, xType type, void* value);
    template<typename T>
    void xAssing(xReference<T> reference, void* value);
    template<typename T>
    void xFree(xReference<T> toFree);
    
    template<typename T>
    xReference<T> xMalloc2(int, enumValue::xType);
    
    virtual ~API();
};

#endif /* API_H */

