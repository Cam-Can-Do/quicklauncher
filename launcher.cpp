#include <iostream>
#include <fstream>

int main(){
    std::string line;
    std::ifstream input("actions.txt");
    if (input.is_open()){
        while(std::getline(input, line)){
            line += "&";    // "&" says to run in background
            system(line.c_str());
        }
        input.close();
}