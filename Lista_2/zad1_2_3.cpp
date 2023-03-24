#include <iostream>
#include <sstream>

using namespace std;

struct node{int x; node *left; node *right; node *parent;};

void insert(node *&root, int value) {
    node *parent = nullptr;
    node *current = root;
    while (current != nullptr) {
        parent = current;
        if (value < current->x) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    node *newNode = new node{value, nullptr, nullptr, parent};
    if (parent == nullptr) {
        root = newNode;
    } else if (value < parent->x) {
        parent->left = newNode;
    } else {
        parent->right = newNode;
    }
}


void remove(node *&root, int value) {
    node *current = root;
    while (current != nullptr && current->x != value) {
        if (value < current->x) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    if (current == nullptr) {
        return;
    }
    if (current->left == nullptr && current->right == nullptr) {
        if (current->parent == nullptr) {
            root = nullptr;
        } else if (current->parent->left == current) {
            current->parent->left = nullptr;
        } else {
            current->parent->right = nullptr;
        }
        delete current;
    } else if (current->left == nullptr || current->right == nullptr) {
        node *child = current->left != nullptr ? current->left : current->right;
        if (current->parent == nullptr) {
            root = child;
        } else if (current->parent->left == current) {
            current->parent->left = child;
        } else {
            current->parent->right = child;
        }
        child->parent = current->parent;
        delete current;
    } else {
        node *successor = current->right;
        while (successor->left != nullptr) {
            successor = successor->left;
        }
        current->x = successor->x;
        remove(root, successor->x);
    }
}

void inorder_do_recu(node *t, void f(node*)) {
    if (t != nullptr) {
        inorder_do_recu(t->left, f);
        f(t);
        inorder_do_recu(t->right, f);
    }
}


void print_node(node *n) {
    std::cout << n->x << " ";
}

int H(node *t) // wysokość drzewa BST (to samo krócej)
{
	return !t ? 0 : 1 + std::max(H(t->left), H(t->right));
}

void prettyLine(node *t, int &n, int level = 0)
{ /*
   */

	if (t)
	{
		int k = n;
		prettyLine(t->left, n, level - 1);
		stringstream s;
		s << " " << t->x << " ";
		int l = s.str().length();
		n += l;
		if (level == 0)
			cout << s.str();
		else
			while (l--)
				cout << " ";
		prettyLine(t->right, n, level - 1);
	}
}

void pretty(node *t)
{
	/*
		Pokazuje drzewo w terminalu:
					 7
				 4       9
			   3  5     8   10
			 1     6           11
	*/

	int h = H(t);
	for (int i = 0; i < h; i++)
	{
		int n = 0;
		prettyLine(t, n, i);
		cout << endl;
	}
}


int main(int argc, char const *argv[])
{
    
 node *t = nullptr; // tworzymy puste drzewo BST

	// dodajemy klucze
	for (int x : {20, 41, 13, 32, 12, 17, 4, 9, 8, 200, 100, 3, 8})
        insert(t,x);

   // pretty(t);

    //remove(t, 20);
    inorder_do_recu(t, print_node);
}
