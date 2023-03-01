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
int nth_element(int n, lnode *L) {
    int result = 0;
    for (int i=0; i<n-1; i++) {
        L=L->next;
        if(L==nullptr)
            return 0;
    }
    return L->key;
};

// d
void insert(lnode* &L, int x) {
    L = new lnode(x, L);
};

//e
void insert_after_smaller(lnode *&L, int x) {
    lnode* t = L;
    while(t!=nullptr) {
        if(t->key<x) {
            t->next = new lnode(x, t->next);
        }
        t=t->next;
    }
};

//f
void remove(lnode* &L, int x){
    lnode* t = L;
    while (t != nullptr) {
        if (t->key == x) {
            t->next = new lnode(x, t->next);
        }
        t = t->next;
    }
};

//g
void filter(lnode* &L, bool(*cond)(int)) {

};

//h
void destroy(lnode* &L) {
    L = nullptr;
};

// zad 7
void reverse(lnode* &L) {
    lnode *x, *y;

    if(L!=nullptr)
    {
        x = L;

        while(x->next){
            y = x->next;
            x->next = y->next;
            y->next = L;
            L = y;
        }
    }
}

// zad 8
void merge(lnode* L1, lnode* L2) {

}

int main() {
    lnode* L = nullptr;


    for(int i=10; i>=1; i--)
        insert(L,i*10);

    write_out(L);
    cout << sum(L) << endl;
    cout << nth_element(3,L) << endl;

    insert(L, 4);
    write_out(L);

    // remove(L,3);
    // write_out(L);

    insert_after_smaller(L, 56);
    write_out(L);

    //destroy(L);
    //write_out(L);

    reverse(L);
    write_out(L);
    
    
}