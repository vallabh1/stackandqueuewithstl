#include "queue.cpp"
#include <iostream>
#include <vector>

int main(){
    queue<int> q;
    q.showqueue();
    q.enqueue(1);
    q.enqueue(3);
    std::cout<<q.front()<<std::endl;
    q.enqueue(9);
    q.showqueue();
    q.dequeue();
    std::cout<<q.back()<<std::endl;
    std::cout<<q.size()<<std::endl;
    q.dequeue();
    q.showqueue();
    return 1;
}
