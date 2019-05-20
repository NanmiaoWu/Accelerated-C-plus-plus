#include <iostream>
#include <string>

std::istream& f1(std::istream& in)
{
   std::string name;
   double midterm;
   double final;
   double x;

   in >> name >> midterm >> final;
   if (in)
   {
       in >> x;
       in.clear();
   }
   std::cout
     << "name: " << name << ','
     << "midterm: " << midterm << ','
     << "final: " << final << ','
     << "grade: " << x << '\n'
   ;
   return in;
}

int main()
{
    while (f1(std::cin));
}
