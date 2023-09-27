#include <vector>
#include <iostream>

template <class T>
class stack{
    public:

    stack(){
        return;
    }
    void push(T data){
        stackvector.push_back(data);
        return;
    }

    void pop(){
        stackvector.pop_back();
        return;
    }

    T top(){
        return stackvector.back();
    }

    bool empty(){
        return stackvector.empty();
    }

    void showstack(){
        if(empty()){
            std::cout<<"The stack is empty"<<std::endl;
        }
        else{
            std::cout<<"Contents of your stack are:"<<std::endl;
            for(auto it = stackvector.rbegin(); it != stackvector.rend(); ++it){
                std::cout<<(*it)<<std::endl;
            }
        }
    }

    private:
    std::vector<T> stackvector;
};