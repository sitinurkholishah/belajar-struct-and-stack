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

int Full(Stack *S){
    return (S->Count == MAXSATCK);
}

int Empty(Stack *S){
    return (S->Count == 0);
}

void Pop(Stack *S, stokItem *x){
    if (Empty(S))
        cout << "Gudang masih kosong!" << endl;
    else{
        --(S->Count);
        *x = S->Barang[S->Count];
        cout << "Barang dengan ID " << *x << " berhasil diambil dari gudang" << endl;
    }
}