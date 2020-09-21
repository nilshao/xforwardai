#include <iostream>
#include <queue>
class MyStack {
    public:
        std::queue<int> res;
        std::queue<int> tmp;
        int num_of_element = 0;

        MyStack() {}
        
        void push(int x) {
            int t;
            while(!res.empty()){
                tmp.push(res.front());
                res.pop();
            }
            res.push(x);
            while(!tmp.empty()){
                res.push(tmp.front());
                tmp.pop();
            }
            num_of_element ++;
            return ;
        }
        
        void pop() {
            int num=res.front();
            if(num_of_element == 0){
                std::cout<< "cannot pop when no elements"<<std::endl;
                return ;
            }
            res.pop();
            
            num_of_element --;
            return ;

        }
        
        int top() {
            if(num_of_element == 0){
                std::cout<< "I have no top"<<std::endl;
            }
            return res.front();
        }
        
        bool empty() {
            return res.empty();
        }

        int size(){
            return num_of_element;
        }
};

int main(){
    MyStack test;
    test.pop();
    test.top();
    test.push(1);
    std::cout<<test.top()<<std::endl;
    test.push(4);
    std::cout<<test.top()<<std::endl;
    std::cout<<test.size()<<std::endl;
    test.pop();
    std::cout<<test.top()<<std::endl;

    return 0;
}


