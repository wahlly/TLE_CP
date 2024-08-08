//
// Created by user on 7/8/24.
//

#include <iostream>

using namespace std;


class Node {
public:
    int data;
    Node* next;
};

void append(Node** head, int data) {
  Node* newNode = new Node();
  newNode->data = data;
  newNode->next = NULL;

  Node* last = *head;

  if(*head == NULL) {
      *head = newNode;
      return;
  }

  while(last->next != NULL) {
      last = last->next;
  }

  last->next = newNode;
};

void deleteNode(Node** head, int position) {
    //use two pointers to track the pointer before the node to delete and after
    Node* prev = *head;
    Node* temp = *head;
    for(int i = 0; i < position; i++) {
        if(i == 0 && position == 1) {
            *head = temp->next;
        } else{
            if(i == position-1 && temp) {
                prev->next = temp->next;
            } else{
                prev = temp;
                if(prev == NULL) {
                    break;
                }

                temp = temp->next;
            }
        }
    }
}