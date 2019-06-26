#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <ios>
#include <iomanip>

using std::cin;                 using std::cout;
using std::vector;              using std::string;
using std::domain_error;        using std::sort;
using std::istream;             using std::endl;
using std::streamsize;          using std::setprecision;

// median function
double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();

    if (size == 0)
        throw domain_error("median of an empty vector");
    sort(vec.begin(),vec.end());
    vec_sz med = size/2;
    return size % 2 == 0 ? (vec[med] + vec[med-1]) / 2 : vec[med];
}

// grade function
double grade (double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

// grade function
// vector of homework
double grade (double midterm, double final, const vector<double>& hw)
{
    if (hw.size() ==0)
        throw domain_error("Student has done no homework");
    return grade(midterm, final, median(hw));
}

// read homework
istream& read_hw(istream& in, vector<double>& hw)
{
    if (in){
        hw.clear();

        double x;
        while (in >> x)
            hw.push_back(x);

        in.clear();
    }
    return in;
}

int main()
{
    // ask for name
    cout << "Enter student's name: ";
    string name;
    cin >> name;

    // ask for midterm and final
    cout << "Enter midterm and final grades: ";
    double midterm, final;
    cin >> midterm >> final;

    // ask for homework
    cout << "Enter homework, "
            "followed by end-of-file: ";

    // read homework
    vector<double> homework;
    read_hw(cin, homework);

    try{
        double final_grade = grade(midterm, final, homework);
        streamsize prec = cout.precision();
        cout << "Your final grade is: " << setprecision(3)
             << final_grade << setprecision(prec) << endl;

    }catch (domain_error){
        cout << endl << "You must enter your grades. " << endl;
        return 1;

    }

    return 0;
}
