#include <iostream>
#include <string>
using namespace std;
class Student
{
    friend class Teacher;
public:
    int age;
    string name;
    Student()
    {
        age = 18;
        name = "Zema";
    }
    void birthday()
    {
        age++;
        cout << "Happy birthday, " << name << "!\n";
    }
    void set_estimation(int estimation)
    {
        this->estimation = 4;
    }
    int get_estimation()
    {
        return estimation;
    }
    static string get_group()
    {
        return group;
    }
private:
    int estimation;
    static string group;
};
class Teacher
{
public:
    void putaRating(Student& d)
    {
        cout << "excellent rating: ";
        d.estimation = 5;
        cout << "5" << endl;
    }
};
string Student::group = "D";
int main()
{
    Student h;
    Teacher d;
    d.putaRating(h);
    cout << "student's group: " << Student::get_group() << endl;
}
