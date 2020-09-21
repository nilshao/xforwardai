#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

int Error_Flag = 0;
long long maxArea(std::vector<long long>& height) {
    long long max1 = 0,max2 = 0, dst = 0, res = 0, tmp = 0;

    for(long long i=0; i<height.size();i++){
        if(height[i]>=max1){
            
            res += (max1-max2) * dst;
            res += tmp;
            max2 = 0;
            max1 = height[i];
            dst = 0;
            tmp = 0;
        }
        else if(height[i]>max2 && height[i] < max1){
            tmp += (height[i]-max2) * dst;
            max2 = height[i];
            dst++;
        }else{
            tmp += max2-height[i];
            dst++;
        }
    }
    
    return res;
}
std::string test_file_name(char* arg){
    std::string num = arg;
    std::string file_name_pre = "../test_case/test_case_1/";
    std::string file_name_app = ".txt";
    return file_name_pre + num + file_name_app;
}

long long make_num(std::string str){
    long long res= 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i]<'0' || str[i]>'9'){
            Error_Flag = 1;
            break;
        }
        res = res * 10 + str[i] - '0';
    }
    return res;
}
int main(int argc, char *argv[]){
    std::vector<long long> stairs;
    std::ifstream testfile;
    std::string file_name = test_file_name(argv[1]);

    std::string num_str;
    testfile.open(file_name);
    while(getline(testfile,num_str)){
        stairs.push_back(make_num(num_str));
        if(Error_Flag == 1){
            std::cout<< "Illegal Input!!!" <<std::endl;
            return 0;
        }
    }
    testfile.close();
    if(stairs.size()==0){
        std::cout<< "empty" <<std::endl;
        return 0;
    }
    long long res = maxArea(stairs);
    std::cout<< res <<std::endl;

    return 0;
}

