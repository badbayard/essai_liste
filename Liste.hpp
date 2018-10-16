#ifndef LISTE_HPP
#define LISTE_HPP
#include <iostream>

template <class T> class cell 
{
    public:
        cell<T>* precedent;
        cell<T>* suivant;
        T data;

        cell(T val){
            precedent = NULL;
            suivant = NULL;
            data = val; 
        }
        ~cell(){}

};

template <class T>class list
{
    private:
        cell<T>* premier;
        cell<T>* dernier;
        int nbelem;
    public:
        list(){
            premier = NULL;
            dernier = NULL;
            nbelem = 0;
        }

        void push_back(T val){
            cell<T>* tmp = new cell<T>(val);
            tmp->precedent = dernier; 
            tmp->suivant = NULL;

            if(!premier){
                premier = tmp;
                dernier = tmp;
            }
            else if(dernier)
            {
                dernier->suivant = tmp;
                dernier = tmp ;
            }
        }

        void push_front(T val){
            cell<T>* tmp = new cell<T>(val);
            tmp->suivant = premier;
            tmp->precedent = NULL;
            premier = tmp;
            if(dernier == NULL){
                dernier = tmp;
            } 
        }
};


#endif
