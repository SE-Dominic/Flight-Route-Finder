#ifndef HEADFILE_H
#define HEADFILE_H
#include <iostream>
#include <list>
#include <vector>
using namespace std;

class airport {
    string city;
    int flight_capacity;
    airport* next;
    public:
    airport(): city("n/a"), flight_capacity(0){}
    string get_city() { return this->city; }
    int get_flightCap() { return this->flight_capacity; }
};

class graph {
    int v; //num vertices
    list<int>* grid;
    //airport* arr[]
    public:

};

#endif
