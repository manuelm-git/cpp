#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main(int argc,char  **argv)
{
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    }
    else if(argc >= 2)
    {
        int i = 1;
        int j = 0;
        char c;
        while(i <= argc && argv[i])
        {
            j = 0;
            while(argv[i][j])
            {
                c = toupper(argv[i][j++]);
                std::cout << c;
            }   
            i++;
        }
        std::cout << "\n";
    }
    return(0);
}