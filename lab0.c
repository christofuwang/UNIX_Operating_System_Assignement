#include "lab0.h"

/* REQUIRED CODE GOES HERE */
int countOccurrences(int x , int data[],int z){
    int count = 0;
    for(int j = 0;j<x;j++){
        if(data[j]==z){
            count++;
        }
    }
    return count;
}
