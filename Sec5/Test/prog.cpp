#include <iostream>
#include <string>

std::string name;
double midterm;
double final;

std::istream& read_hw(std::istream& is) {
    if(is){
        double x;
        while(is >> x){
            std::cout << "hw:  " << x << '\n';
        }

        is.clear();
    }
    return is;
}

std::istream& read(std::istream& is) {
    is >> name >> midterm >> final;
    std::cout
      << "name: " << name << ','
      << "midterm: " << midterm << ','
      << "final: " << final << ','
    ;
    return read_hw(is);
}

int main()
{
   while (read(std::cin))
   {}
}
