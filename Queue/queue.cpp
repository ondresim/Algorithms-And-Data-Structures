#include <iostream>

template<class T>
class Queue
{
    private:
        T* arr;
        int size;
        int element_count;
    public:
        Queue(int size);

        void Push(T item);
};

int main(int argc, char* argv[]){

    std::cout << "Hello World!" << std::endl;

    return 0;
}

template<class T>
Queue<T>::Queue(int size) : size(size), element_count(0)
{
    arr = new T[size];
}

template<class T>
void Queue<T>::Push(T item)
{
    if (this->size){

    }
}