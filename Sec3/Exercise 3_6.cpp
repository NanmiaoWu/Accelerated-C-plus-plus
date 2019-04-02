
// 3-6
#include <iostream>
#include <string>
#include <algorithm>
#include <ios>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::streamsize;
using std::setprecision;
using std::sort;


int main()
{
    // ask for and read student's name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << " !" << endl;
    
    // ask for and read midterm and final grades
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;
    
    // ask for homework grades
    cout << "Enter all your homework grades, "
    << "followed by end-of-file: ";
    
    // the number and sum of grades read so far
    int count = 0;
    double sum = 0;
    
    // a variable into which to read
    double x;
    
    // invariant:
    // we have read count grades so far, and
    // sum is the sum of first count grades
    while (cin >> x) {
        ++count;
        sum += x;
    }
    
    streamsize prec = cout.precision();
    // if there is no homework
    if ( count == 0){
        // write the result
        cout << "Your final grade is " << setprecision(3)
        << 0.2 * midterm + 0.4 * final
        << setprecision(prec) <<endl;
    }
    else {
        // write the result
        cout << "Your final grade is " << setprecision(3)
        << 0.2 * midterm + 0.4 * final +0.4 * sum / count
        << setprecision(prec) <<endl;
    }
    
    
    return 0;
}
