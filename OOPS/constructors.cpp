#include<iostream>
using namespace std;

class Teacher{
private:
    double salary;
public:
    //Non-parameterized constructor
    Teacher(){      
        cout <<"Hi, I am constructor\n";
        dept = "Computer Science";
    }
    //Parameterized constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    string name;
    string dept;
    string subject;
    
    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout <<"Name: "<< name<<endl;
        cout <<"Subject: "<< subject<<endl;
    }
};
int main(){
    Teacher t1("John","Computer Science", "C++", 5000000);
    cout << t1.name<<endl;
    cout << t1.dept<<endl;
}