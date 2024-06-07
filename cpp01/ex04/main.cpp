#include <iostream>
#include <string>
#include <fstream>


int main(int argc,char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./Sedisforlosers [file] [str to replace] [str to replace with]"  << std::endl;
        return 1;
    }
    std::ifstream filename(argv[1]);
    std::ofstream outfile((std::string(argv[1]) + ".replace").c_str());
    std::string strToReplace(argv[2]);
    std::string strToReplaceWith(argv[3]);
    std::string line;
    if(strToReplace.empty() || strToReplaceWith.empty())
    {
        std::cout << "Error: strToReplace or strToReplaceWith is empty" << std::endl;
        return 1;
    }
    if (filename.is_open())
    {
        std::getline(filename, line, '\0');
        size_t pos = 0;
        while((pos = line.find(strToReplace,pos)) != std::string::npos) 
        {
            line = line.erase(pos, strToReplace.length());
            line = line.insert(pos, strToReplaceWith);
            pos += strToReplaceWith.length();
            // line = line.substr(0, pos) + strToReplaceWith + line.substr(pos + strToReplace.length());    
        }
        outfile << line;
        filename.close();
    }
    else
    {
        std::cout << "Error: file not found" << std::endl;
        return 1;
    }


    return 0;
}