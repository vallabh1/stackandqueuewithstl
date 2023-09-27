#include <list>
#include <iostream>

template <class T>
class queue 
{
private:
    std::list<T> qvector;

public:
    T front(){
        if(qvector.empty()){
            return T();
        }
        else{
            return qvector.front();
        }
    }
    T back(){
        if(qvector.empty()){
            return T();
        }
        else{
            return qvector.back();
        }
    }
    void enqueue(T data){
        qvector.push_back(data);
        return;
    }
    void dequeue(){
        if(qvector.empty()){
            return;
        }
        qvector.pop_front();
        return;
    }
    bool empty(){
        return qvector.empty();
    }
    unsigned size(){
        return qvector.size();
    }
    void showqueue(){
        if(empty()){
            std::cout<<"The queue is empty"<<std::endl;
        }
        else{
            std::cout<<"Queue: ";
            for(auto it = qvector.begin(); it != qvector.end(); ++it){
                std::cout<<(*it)<<" ";
            }
            std::cout<<std::endl;
        }
    }
};
