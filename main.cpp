#include <iostream>
#include "list.cpp"

using namespace std;

int main()
{
    linkedList::List<int> list{};
    list.insert(10);
    list.insert(5);
    list.insert(1);

    while (list.peek())
    {
        std::cout << list.getCurrent() << " ";
    }

    return 0;
}