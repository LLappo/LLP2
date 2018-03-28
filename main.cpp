#include <iostream>
#include "list.h"

int main()
{
    DCLList l;
    l.pushBack(1);
    l.pushBack(2);
    l.pushBack(3);
    l.pushBack(4);
    l.pushFront(5);
    l.pushBack(6);
    l.pushFront(7);
    l.pushFront(8);
    l.pushFront(9);
    l.pushAfter(3, 10);
    l.pushAfter(9, 11);
    l.pushAfter(11, 12);
    l.pushAfter(6, 13);
    l.pushAfter(13, 13);
    l.pushAfter(13, 13);
    l.pushAfter(13, 13);
    l.pushAfter(23, 666);
    l.pushIndex(0, 666);
    l.pushIndex(1, 667);
    l.pushIndex(2, 668);
    l.pushIndex(-1, 669);
    l.pushIndex(100, 670);
    l.pushIndex(19, 671);
    l.pushBack(6);
    l.pushBack(6);
    l.pushBack(6);
    std::cout<<l;
    l.deleteIndex(0);
    l.deleteIndex(14);
    l.deleteIndex(19);
    l.pushBack(6);
    l.pushBack(6);
    l.pushBack(6);
    l.pushBack(6);
    l.pushBack(6);
    std::cout<<l;
    l.deleteValue(6);
    std::cout<<l<<l.unique();
    DCLList l2(l), l3(l.unique());
    l2.pushBack(1234);
    std::cout<<"l2==l3? "<<(l2==l3)<<'\n';
    std::cout<<"l2!=l3? "<<(l2!=l3)<<'\n';
    std::cout<<(l2-l3)<<(l2+l3);
    return 0;
}
