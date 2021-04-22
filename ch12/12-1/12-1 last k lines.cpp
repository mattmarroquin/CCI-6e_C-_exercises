#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    int k = 2;
    int j = 1;

    std::ifstream in("testfile");

    if (in.is_open())
    {
        std::vector<std::string> lines_in_reverse;
        std::string line;
        while (std::getline(in, line))
        {
            // Store the lines in reverse order.
            lines_in_reverse.insert(lines_in_reverse.begin(), line);
        }
	
    	for (const auto i: lines_in_reverse) {
	      std::cout << i << " \n";
	      if(j == k) {break;}
	      j++;
    	}
    }
}
