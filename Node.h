#ifndef NODE_H
#define NODE_H

class Node {

	private:
		int data;
		Node* next;

	public:

		Node(int data);
		void set_data(int data);
		int get_data();
		void set_next(Node* next);
		Node* get_next();

};

#endif

