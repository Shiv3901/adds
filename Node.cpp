#include "Node.h"

Node::Node(int data) {

	this->data = data;
	next = nullptr;

}

void set_data(int data) {

	this->data = data;

}

int get_data() {
	return data;
}

void set_next(Node* next) {

	this->next = next;

}

Node8 get_next() {
	return next;
}
