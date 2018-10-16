#include <iostream>
#include "Liste.hpp"

using namespace std;

int main(){


    list<int> li;
    li.push_front(5);
    li.push_front(4);
    li.push_front(7);
    int a = li.front();
    int b = li.back();
    cout << a <<endl << b<< endl;


/*
    list<int> lili;
    for(int i = 0 ; i < 10 ; i++){
        lili.push_front(i%3);
    }
*/
    return 0;
}