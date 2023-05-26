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
	string nm;
	cout << "\nEnter the ro11 number of the student:";
	cin >> nim;
	cout << "\nEnter the name of the student:";
	cin >> nm;
	Node* newNode = new Node(); //step 1
	newNode->noMhs = nim; // step 2
	newNode->name = nm; // step 2

	//"insert a node in the beginner of a doubly - linked list"/
	if (START == NULL || nim <= START->noMhs) {
		cout << "\nDuplicate number not allowed" << endl;
		return;
	}
	newNode->next = START; //step 3
	if (START != NULL)
		START->prev = newNode; //stepp 4
	newNode->prev = NULL; //step 5
	START = newNode; // step 6
	return;
}
