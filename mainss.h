#include <iostream>
#include <stdlib.h>

class Kruskal {
private:
int length;
int arrSize;
int** Map;
int* avaiRoad;
int total,xRand,yRand,temp,walk;

public:
/// (CONSTRUCTOR)
Kruskal(int l) {
        srand ( time(NULL) );
        length = l;
        arrSize = length*2+1;
};

void initArray(){
        avaiRoad = new int[4];
        Map = new int*[arrSize];
        for(int i = 0; i < arrSize; ++i) {
                Map[i] = new int[arrSize];
        }
}

void wallBreaker(int xRand2, int yRand2, int xRand1, int yRand1){
        Map[xRand1][yRand1] = 0;
        temp = Map[xRand2][yRand2];
        for (int i = 0; i < arrSize; i++) {
                for (int j = 0; j < arrSize; j++) {
                        if (Map[i][j] == temp) {
                                Map[i][j] = Map[xRand][yRand];
                        }
                }
        }
        walk--;
}

void cekAvailableRoad() {
        total = 0;
        if(xRand+2 <= length*2-1) {
                if (Map[xRand+2][yRand] != Map[xRand][yRand]) {
                        avaiRoad[total]=0;
                        total=total+1;
                }
        }
        if (xRand-2 >= 0) {
                if (Map[xRand-2][yRand] != Map[xRand][yRand]) {
                        avaiRoad[total]=1;
                        total=total+1;
                }
