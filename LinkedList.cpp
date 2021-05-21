#include "LinkedList.h"
#include <bits/stdc++.h>
using namespace std;

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::LinkedList(int nodes[], int size) {

	head = nullptr;

	for (int i = 0 ; i < size ; i++) {
		addEnd(nodes[i]);
	}

}

void LinkedList::addFront(int newItem) {

	if (head == nullptr) {
		head = new Node(newItem);	
	} else {
		Node* newHead = new Node(newItem);
		newHead->set_next(head);
		head = newHead;
	}

}

void LinkedList::addEnd(int newItem) {

	if (head == nullptr) {
		head = new Node(newItem);
	} else {

		//traverse till the end of the list first
		Node* temp = head;
		while (temp->get_next() != nullptr) {
			temp = temp->get_next();
		}
		Node* newNode = new Node(newItem);
		temp->set_next(newNode);

	}

}

void LinkedList::addAtPosition(int position, int newItem) {

	if (position <= 1) {
		head = new Node(newItem);
	} else {

		Node* temp = head;
		int pos = 2;

		while (temp->get_next() != nullptr) {

			if (pos == position) {
				Node* newNode = new Node(newItem);
				Node* tempNext = temp->get_next();
				newNode->set_next(tempNext);
				temp->set_next(newNode);
				return;
			}

			temp = temp->get_next();
			pos++;

		}

		if (pos <= position) {
			addEnd(newItem);
		}

	}

}

int LinkedList::search(int item) {

	int position = 1;
	Node* temp = head;

	while (temp != nullptr) {

		if (temp->get_data() == item) {
			cout << position < " ";
			return position;
		}

		temp = temp->get_next();
		position++;

	}

	cout << 0 << " ";

	return 0;

}

void LinkedList::deleteFront() {

	if (head == nullptr)
		return;

	Node* newHead = head->get_next();
	delete head;
	head = newHead;

}

void LinkedList::deleteEnd() {

	Node* secondLast = head;

	while (secondLast->get_next(secondLast->get_next()) != nullptr) {
		secondLast = secondLast->get_next();
	}

	delete secondLast->get_next();
	secondLast->set_next(nullptr);

}

void LinkedList::deletePosition(int position) {
	
	if (position < 1) {
		cout << "outside range";
		return;
	} else if (position == 1) {
		deleteFront();
	} else {

		Node* temp = head;
		int pos = 2;

		while (temp->get_next() != nullptr) {

			if (pos == position) {
				Node* tail = temp->get_next(temp->get_next());
				delete temp->get_next();
				head->set_next(tail);
				break;
			}
			temp = temp->get_next();
			pos++;

		}

		if (pos > position)
			cout << "outside range";

	}

}

int LinkedList::getitem(int position) {

	int pos = 1;
	Node* temp = head;

	while (temp->get_next() != nullptr) {
	
		if (pos == position) {
			break;
		}
		temp = temp.get_next();
		pos++;

	}

	if (pos != position) {
		cout << std:numeric_limits<int>::max() << " ";
		return std::numeric_limits<int>::max();
	} else {
		cout << temp.get_data() << " ";
		return temp.get_data();
	}

}

void LinkedList::printItems() {
	
	if (head != nullptr) {
	
		Node* temp = head;
		while (temp != nullptr) {
			cout << temp.get_data() << " ";
			temp = temp.get_next();
		}

	}

}


~LinkedList::LinkedList() {

	if (head != nullptr) {

		Node* prev = head;
		Node* temp = prev;

		while (prev != nullptr) {
			temp = prev;
			prev = prev.get_next();
			delete temp;
		}

	}

}


