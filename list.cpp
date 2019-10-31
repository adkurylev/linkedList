#include "list.h"

namespace linkedList {
    template<typename T>
    List<T>::List()
    {
        _head = nullptr;
        _current = nullptr;
    }

    template<typename T>
    void List<T>::insert(T data)
    {
        Node* node = new Node(data, _head);
        _head = node;
        _current = node;
    }

    template<typename T>
    T List<T>::getCurrent()
    {
        if (!_current)
            throw std::logic_error("There is no more elements.");

        T temp = _current->el;
        _current = _current->next;
        return temp;
    }

    template<typename T>
    void List<T>::clear()
    {
        List();
    }

    template<typename T>
    List<T>::~List()
    {
        delete _head;
        delete _current;
    }

    template<typename T>
    void List<T>::reset()
    {
        _current = _head;
    }

    template<typename T>
    bool List<T>::peek()
    {
        return _current;
    }

    template<typename T>
    List<T>::Node::Node(T data, Node* ptr)
    {
        el = data;
        next = ptr;
    }
}