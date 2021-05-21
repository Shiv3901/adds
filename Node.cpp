#include "Node.h"

Node::Node(int data) {

	this->data = data;
	next = nullptr;

}

void Node::set_data(int data) {

	this->data = data;

}

int Node::get_data() {
	return data;
}

void Node::set_next(Node* next) {

	this->next = next;

}

Node* Node::get_next() {
	return next;
}
