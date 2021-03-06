#ifndef _H
#define _H

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class materialNode{
    public:
        char id;
        int weight;
        materialNode* next;
};

class wagonNode{
    public:
        int wagonId;
        materialNode* material;
        wagonNode* next;
};

class Train{  

    wagonNode* head;
    
    public:
        void create();
        void addMaterial(char,int);
        void deleteFromWagon(char, int); 
        void printWagon(); //Prints wagon info
    private:
        int sizeOfTrain();
        int addMaterial2Wagon(int int_wagon_id, char material, int weight);
        int findWagon(char material, int weight);
        int findWagonfromlast(char material, int weight);
        wagonNode * getWagon(int wagon_id);
};

#endif