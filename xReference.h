#ifndef XREFERENCE_H
#define XREFERENCE_H

template<class T>
class xReference{
    private:
        T num1;
        T _ID;
        T _size;
        T _type;
    public:
        xReference();
        void setSize(int);
        int getSize();
        void setID(T);
        T getID();
        
        
                
        
        
        xReference& operator *()
        {
            /*
             * Retorna el valor guardado en la mesh memory
             * Crea un espacio de memoria en el cliente usando malloc
             * Asigna el valor a ese espacio y retorna el puntero (void*)
             * para que sea usadopor el cliente
             */
            malloc(_size);
            //return ;
        }                    
        bool operator ==(xReference& obj2){
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
            int resultado = this->num1 * obj2->num1;
            return resultado;
        }
};

template<class T>
xReference<T>::xReference(){
    _size = 0;
}




#endif /* XREFERENCE_H */

