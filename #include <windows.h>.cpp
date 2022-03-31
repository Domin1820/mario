#include <windows.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmatch>
#include <cstdlib>

using namespace std;



const int WIDTH = 800, HEIGH = 600;

const int dw=9, dh=16;

void convertir(int P[2],float x, float y){

    P[0] = int(x)/dw;
    P[1] = int(y)/dh;
}
void convertir(int P[2],int x, int y){

    P[0] = int(x)/dw;
    P[1] = int(y)/dh;

}

int main(){

    return 0;
}
