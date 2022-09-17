#include "ll.hh"

node* head = nullptr;

void append(node* n){
	node* curr = head;

	if(head == nullptr){
		head = n;
		return;
	}

	while(curr->next != nullptr){
		curr = curr->next;
	}

	curr->next = n;
	n->prev = curr;
	n->next = nullptr;

}

void erase(node* n){

	if(n->next != nullptr){
		n->next->prev = n->prev;
	
	if (n->prev) {
        n->prev->next = n->next;
    } 
	
	else {
        head = n->next;
    }
	}
}

int main() {
	printf("Hi! This program is a placeholder.\n");
	printf("If you want to experiment with linked list code, either edit `ll1.cc` and `make`,\n");
	printf("or make a file called `llNN.cc` and `make`.\n");


}
