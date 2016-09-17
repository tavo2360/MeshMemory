#ifndef XREFERENCE_H
#define XREFERENCE_H
#include "enumValues.h"

template<class T>
class xReference{
    private:
        T num1;
        T _ID;
        T _size;
        T _type;
    public:
        xReference();
        void setID(T);
        T getID();
        void meshCall(int, enumValue::xType);
        void meshCall(int, enumValue::xType, void*);
        void assingValue(void* value);
        
        
        xReference& operator *()
        {
            /*
             * Retorna el valor guardado en la mesh memory
             * Crea un espacio de memoria en el cliente usando malloc
             * Asigna el valor a ese espacio y retorna el puntero (void*)
             * para que sea usadopor el cliente
             */
//            solicita al MMM que regrese la informacion del valor en el espacio
//            de memoria, luego crea un espacio de memoria en el cliente
//            con malloc y guarda ahi la informacion, retornando el puntero
            //malloc(_size);
            //return ;
        }                    
        bool operator ==(xReference obj2){
            if(this->_ID == obj2._ID){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator !=(xReference obj2){
            if(this._ID != obj2._ID){
                return true;
            }
            else{
                return false;
            }
        }
//        void operator =(){
//            //Incrementa el conteo de referencias en Mesh Mem Manager
//        }
        int operator +(xReference* obj2){
//            llamada al MMM con el ID, indicandole que debe aumentar las
//            referencias a ese espacio de memoria
        }
};

template<class T>
xReference<T>::xReference(){
    _size = 0;
}

template<class T>
void xReference<T>::setID(T id){
    _ID = id;
}

template<class T>
T xReference<T>::getID(){
    return _ID;
}

template<class T>
void xReference<T>::meshCall(int size, enumValue::xType type){
    _size = size;
    _type = type;
//    llamada al MMM para solicitar un espacio de tamaño size
//    y de tipo type
}

template<class T>
void xReference<T>::meshCall(int size, enumValue::xType type, void* value){
    _size = size;
    _type = type;
//    llamada al MMM para solicitar un espacio de tamaño size,
//    de tipo type y el valor a guardar value
}

template<class T>
void xReference<T>::assingValue(void* value){
//    llamada al MMM para asignar un valor a un espacio de memoria
}

#endif /* XREFERENCE_H */

