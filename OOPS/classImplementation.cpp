#include<iostream>
using namespace std;

class Teacher{
private:
    double salary;
public:
    //properties
    string name;
    string dept;
    string subject;
    
    //methods
    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double s){ //these types of functions are called 'setter'
        salary = s;
    }

    double getSalary(){ //getter
        return salary;
    }
};
int main(){
    Teacher t1;
    t1.name = "John";
    t1.subject = "c++";
    t1.dept = "cs";
    //t1.salary = 25000; cannot be accessed because salary property is private but it can be accessed using functions
    cout << t1.name<<endl;
    t1.setSalary(24000);
    cout << t1.getSalary();
}