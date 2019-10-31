namespace linkedList {
    template<typename T>
    class List {
    public:
        List();

        void insert(T data);

        T getCurrent();

        void clear();

        void reset();

        bool peek();

        ~List();

    private:
        class Node {
        public:
            Node(T data, Node* ptr);

            T el;
            Node* next;
        };

        Node* _head;
        Node* _current;
    };
}