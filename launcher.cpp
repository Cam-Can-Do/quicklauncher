#include <iostream>
#include <fstream>

int main(){
    std::string line;
    std::string path = (std::string(std::getenv("HOME")) + "/.config/quicklauncher/actions.txt");
    std::ifstream input(path);
    if (input.is_open()){
        while(std::getline(input, line)){
            line = "nohup " + line + " &";    // "&" says to run in background
            std::cout << "Executing: " << line << std::endl;
            system(line.c_str());
        }
        input.close();
    }
}
