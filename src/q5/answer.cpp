#include <iostream>
#include <fstream>
int main(){
    std::ifstream testfile;
    std::string file_name = "../question5.txt";

    
    testfile.open(file_name);

    std::string doc;
    while(getline(testfile,doc)){
        std::cout<<doc<<std::endl;
    }

    
    testfile.close();

    return 0;
}