#include<iostream>
using namespace std;

    class employee
    {
    public :
        
        string name;
        int age;
        float salary;
    };

    int main(){

        employee e1,e2;

        e1.name="ayush";
        e1.age=12;
        e1.salary= 50000;
        
        e2.name="om";
        e2.age=12;
        e2.salary= 50000; 


        cout<<"name of first employee: "<<e1.name<<endl;
        cout<<"age: "<<e1.age<<endl;
        cout<<"salary: "<<e1.salary<<endl;

         cout<<"name of second employee: "<<e2.name<<endl;
        cout<<"age: "<<e2.age<<endl;
        cout<<"salary: "<<e2.salary;

        return 0;
    }


