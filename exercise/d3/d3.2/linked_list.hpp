#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <iostream>
#include <memory>

template <class T>
class List{
private:
    auto start = std::make_unique<ListElement>(ListElement());
    std::size_t amount = 0;
    T &at_helper(const std::size_t position,
        std::unique_ptr<List::ListElement> ptr = List::start){
            std::size_t count = 0;
            if(count == position){
                return ptr->getValue()
            }
        };
public:
    class ListElement{
    private:
        T _val;
        auto next = std::make_unique<ListElement>(ListElement())
    public:
        ListElement(){};
        ListElement(T data): _val(data);
        T getValue(){ return _val;}
        T getNext(){ return next;}

    };

    List(){}
    T &at(const std::size_t position);
    void insertItem(const T &data, const std::size_t position);
    void deleteItem(const std::size_t position)
    const size_t count(){ return amount;}


};

#endif