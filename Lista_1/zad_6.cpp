#include <iostream>
using namespace std;


struct lnode {
    int key;
    lnode* next;
    lnode(int k, lnode* n=nullptr):key(k), next(n){}
};

// a
void write_out(lnode* L) {

};

// b
void sum(lnode* L) {
    int result = 0;
    while(L!=nullptr)
        result += L->key;
        L=L->next;
};

//c
void nth_element(int n, lnode *L) {

};

// d
void insert(lnode* L, int x) {
    L = new lnode(x, L);
};

//e
void insert_after_smaller(lnode *&L, int x) {

};

//f
void remove(lnode* &L) {
    lnode * t=L;
    L = t->next;
    delete t;
};

//g
void filter(lnode* &L, bool(*cond)(int)) {

};

//h
void destroy(lnode* &L) {

};

int main() {
    lnode* L=NULL;

    for(int i=0; i<10; i++)
        insert(L,i*12);

    while (L)
    {
        cout<<"Hello"<<endl;
        cout << L->key << endl;
        remove(L);
    }
    
}