#include <iostream>
using namespace std;


struct lnode {
    int key;
    lnode* next;
    lnode(int k, lnode* n=nullptr):key(k), next(n){}
};

// a
void write_out(lnode* L) {
    while (L)
    {
        cout << L->key<< " ";
        L = L->next;
    }
    cout<<endl;
              
};

// b
int sum(lnode *L) {
    int result = 0;
    while(L)
    {
        result += (L->key);
        L=L->next;
    }
    return result;
};

//c
void nth_element(int n, lnode *L) {

};

// d
void insert(lnode* &L, int x) {
    L = new lnode(x, L);
};

//e
void insert_after_smaller(lnode *&L, int x) {

};

//f
void remove(lnode* &L, int x) {
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
    lnode* L = nullptr;


    for(int i=10; i>=1; i--)
        insert(L,i);

    write_out(L);
    cout << sum(L) << endl;
    //remove(L);
    
    
}