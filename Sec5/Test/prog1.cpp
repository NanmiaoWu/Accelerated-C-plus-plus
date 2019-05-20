#include <iostream>
#include <string>

int main()
{
    while (std::cin)
    {
        std::string name;
        double midterm;
        double final;
        double x;

        std::cin >> name >> midterm >> final;
        if (std::cin)
        {
            std::cin >> x;
            std::cin.clear();
        }
        std::cout
          << "name: " << name << ','
          << "midterm: " << midterm << ','
          << "final: " << final << ','
          << "grade: " << x << '\n'
        ;
    }
    return 0;
}
