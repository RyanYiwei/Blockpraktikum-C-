#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>
#include <memory>

template <class T>
class List{
    class ListElement;
    class ListIterator;
public:
    List(const T &init_val, const std::size_t count);
    T &at(const std::size_t position);
    void insertItem(const T &data, const std::size_t &position);
private:
    std::shared_ptr<ListElement> _first;
    std::size_t _size;

    T _dummy;
    
};
template <class T>
List<T>::List(const T &init_val, const std::size_t count){

}

template <class T>
void List<T>::insertItem(const T &data, const std::size_t &position){
    std::shared_ptr<ListElement> ptr = _start;
    if(ptr == nullptr){
        _start = std::make_shared<ListElement>(data, nullptr, nullptr);
        return;
    }
    for(std::size_t i=0; i<position && ptr->next!=nullptr; i++){
        ptr = ptr->next;
    }
    std::shared_ptr<ListElement> new_ptr = 
            std::make_shared<ListElement> (data, ptr, ptr->next);
    if(ptr->next!=nullptr){
        ptr->next->previous = new_ptr;
    }
    ptr->next = new_ptr;
}

template <class T>
T &List<T>::at(const std::size_t position){
    if(position >= _size){
        std::cout << "Out of Range." << std::endl;
        return _dummy;
    }else{
        std::shared_ptr<ListElement> ptr = _first;
        for(std::size_t i=0; i<position; i++){
            ptr = ptr->next;
        }
        return ptr->data;
    }
}

// List Element
template <class T>
class List<T>::ListElement{
public:
    std::shared_ptr<ListElement> next, previous;
    T data;
    ListElement(const T &data,
                std::shared_ptr<ListElement> next,
                sdt::shared_ptr<ListElement> prev)
        : data(data), next(next), previous(prev){}
};


#endif