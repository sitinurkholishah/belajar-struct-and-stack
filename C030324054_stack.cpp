#include <iostream>
using namespace std;

const int MAXSATCK = 10;
typedef int stokItem;

typedef struct{
    stokItem Barang[MAXSATCK];
    int Count;
} Stack;

void initializeStack(Stack *S){
    S->Count = 0;
}

