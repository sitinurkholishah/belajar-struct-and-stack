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

void Push(stokItem x, Stack *S){
    if (Full(S))
        cout << "Gudang penuh! Barang tidak dapat disimpan!" << endl;
    else{
        S->Barang[S->Count] = x;
        cout << "Barang dengan ID " << x << " berhasil ditambahkan ke gudang" << endl;
        ++(S->Count);
    }
}

int main(){
    Stack Gudang;
    stokItem *B = Gudang.Barang;

    initializeStack(&Gudang);

    Pop(&Gudang, B);
    Push(35, &Gudang);
    
    Push(56, &Gudang);
    Push(13, &Gudang);
    Push(12, &Gudang);
    Pop(&Gudang, B);

    Push(76, &Gudang);
    Push(34, &Gudang);
    Push(87, &Gudang);
    Push(99, &Gudang);
    Push(10, &Gudang);
    Push(45, &Gudang);
    Push(54, &Gudang);
    Push(71, &Gudang);
    
    Pop(&Gudang, B);
    Push(32, &Gudang);
}