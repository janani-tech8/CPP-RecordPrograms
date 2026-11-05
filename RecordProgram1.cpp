#include <iostream>
#include <string>
using namespace std;
class Student
{
    private:
        int rollNo;
        string Name;
    public:
        //constructor
        Student(int r, string n)
        { 
            rollNo=r;
            Name=n;
            cout<<"Student object created"<<endl;

        }
        //Member function
        void display()
        {
            cout<<"Roll Number: "<<rollNo<<endl;
            cout<<"Name: "<<Name<<endl;
        }
        //Destructor
        ~Student()
        {
            cout<<"Student object destroyed"<<endl;
        }

};
int main()
{
    int rollNum;
    string Name;
    cout<<"Enter Roll Number: ";
    cin>>rollNum;
    cout<<"Enter Name: ";
    cin>>Name;
    Student s1(rollNum,Name);
    s1.display();
    return 0;
}