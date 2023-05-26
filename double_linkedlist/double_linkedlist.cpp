#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;

};

class DoubleLinkedlist {
private:
	Node* START;
public:
	DoubleLinkedlist();
	void addnode();
	bool search(int ro11no, Node** previous, Node** current);
	bool deletenode(int ro11on);
	bool listEmpty();
	void traverse();
	void revtraverse();
	void hapus();
	void searchdata();
};

DoubleLinkedlist::DoubleLinkedlist() {
	START = NULL;
}

void DoubleLinkedlist::addnode() {
	int nim;
	string nm
}
