#include <iostream>
#include <fstream>
#include <stack>
int Error_Flag = 0;
class Node{
    public:
        int val;
        Node *next;
        
    
      //  Node();
        Node(int x) : val(x), next(NULL) {}
};

Node* makeList(std::string num){
    Node* res = new Node(0);
    
    for(int i = num.length()-1; i>=0; i--){
        if(num[i]<'0' || num[i]>'9'){
            Error_Flag = 1;
            break;
        }
        res->val = num[i]-'0';
        Node* head = new Node(0);
        head -> next = res;
        res = head;
    }


    return res->next;
}

Node* addTwoNum(Node* l1, Node* l2) {
    std::stack<int> s1,s2;
        while(l1){
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2 = l2->next;
        }
        int carry=0;
        Node* res=new Node(0);
        while(!s1.empty()||!s2.empty() ||carry!=0 ){
            int num1 = (s1.empty())? 0:s1.top();
            int num2 = (s2.empty())? 0:s2.top();
            int cur = num1+ num2+carry;
            carry = cur/10;
            cur = cur%10;

            res->val = cur;
            //再新建一个node连到res上，
            Node* last = new Node(0);
            last->next = res;
            res = last;

            if (!s1.empty()) s1.pop();
            if (!s2.empty()) s2.pop();
        }
        return res->next;
}

void print_result(Node* n){
    
    while(n != NULL){
        std::cout << n->val;
        n = n->next;
    }

    return ;
}


std::string test_file_name(char* arg){
    std::string num = arg;
    std::string file_name_pre = "../test_case/test_case_3/q3t";
    std::string file_name_app = ".txt";
    return file_name_pre + num + file_name_app;
}

int main(int argc, char *argv[]){
    std::ifstream testfile;
    std::string file_name = test_file_name(argv[1]);

    
    testfile.open(file_name);

    std::string num1,num2;
    
    getline(testfile, num1);
    getline(testfile, num2);
    if(num1 == "" && num2 == "" ){
        std::cout<<"0"<<std::endl;
        return 0;
    }
    else if(num1 == "" ){
        print_result(makeList(num2));
        std::cout<<std::endl;
        return 0;
    }
    else if(num2 == ""){
        print_result(makeList(num1));
        std::cout<<std::endl;
        return 0;
    }
    
    testfile.close();

    Node* l1 = makeList(num1);
    Node* l2 = makeList(num2);
    
    if(Error_Flag == 1){
        std::cout<< "Illegal Input!!!" <<std::endl;
        return 0;
    }

    Node* res = addTwoNum(l1, l2);

    print_result(res);
    std::cout<<std::endl;
    return 0;
}