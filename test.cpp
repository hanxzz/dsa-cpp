#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
    double salary;
    public:
    //properties
    string name;
    string dept;
    string subject;

    Teacher(string name, string dept, double salary){
        this->name = name;
        this->dept = dept;
        this->salary = salary;
    }
    
    void changeDept(string newDept){
        dept = newDept;
    }
    void setSalary(double s){
        salary = s;
    }
    double getSalary(){
        return salary;
    }
    void getInfo(){
        cout << "Name: "<< name <<endl; 
        cout << "Department: "<< dept <<endl; 
        cout << "Salary: "<< salary <<endl; 
    }
};

int main(){
    Teacher t1("Hanish","cs",2392939);
    t1.getInfo();
    

}