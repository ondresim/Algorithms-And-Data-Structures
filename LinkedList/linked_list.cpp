#include <iostream>

template<class T>
class LinkedList
{
    private:
        struct Node {
            T* item;
            struct Node* next;
        };
        struct Node* head;

    public:
        LinkedList();

        void insertAtHead(T new_item);
};

template<class T>
LinkedList<T>::LinkedList()
{
    head = nullptr;
}

template<class T>
void LinkedList<T>::insertAtHead(T new_item)
{
    struct Node* tmp = head;
    
    head = new struct Node;
    head->item = new_item;
    head->next = nullptr;
}