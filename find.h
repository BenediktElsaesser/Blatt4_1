//
// Created by Elsäßer on 03.12.2018.
//

#ifndef BLATT4_1_FIND_H
#define BLATT4_1_FIND_H

template <class T1> int find(T1 array[], int length, T1& v){

    for(int i=0;i<length;i++)
    {
        if(array[i] == v) {
            return 0;
        }
    }
    return -1;
}


#endif //BLATT4_1_FIND_H
