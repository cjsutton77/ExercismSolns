#include "simple_linked_list.h"

#include <stdexcept>

namespace simple_linked_list {

std::size_t List::size() const {
    return current_size;
}

void List::push(int entry) {
    Element* new_head = new Element(entry);
    new_head->next = head;
    head = new_head;
    ++current_size;
}


int List::pop() {
    int retVal = head->data;
    Element* temp = head;
    head = head->next;
    --current_size;
    delete temp;
    temp = nullptr;
    return retVal;
}

void List::reverse() {
    Element* prev = nullptr;
    Element* curr = head;
    Element* next = nullptr;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

List::~List() {
    while(head){
        Element* temp = head;
        head = head->next;
        delete temp;
    }
}

}  // namespace simple_linked_list
