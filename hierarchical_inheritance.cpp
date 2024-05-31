#include<iostream>
class Human{            //Parent class/base class
      protected:
      std::string name;
      int age;
      public:
      Human(){

      };
      Human(std::string name,int age){
        this->name=name;
        this->age=age;

      }
      void work(){
        std::cout<<"I am working"<<"\n";
      }
};

class Student:public Human{
    int roll_number,fees;
    public:
    Student(std::string name,int age,int roll_number,int fees):Human(name,age){
        this->roll_number=roll_number;
        this->fees=fees;
    }
        void display(){
            std::cout<<name<<" "<<roll_number<<" "<<age<<" "<<fees<<std::endl;
        }
};

class Teacher:public Human{
    int salary;
    public:
    Teacher(int salary,std::string name,int age){
        this->salary=salary;
        this->name=name;
        this->age=age;
    }
    void display(){
        std::cout<<name<<" "<<age<<" "<<salary<<" "<<std::endl;
    }

};

int main(){
    Student A1("Kaushiki",22,22,800000);
    A1.display();
    Teacher A2(990000000,"topper",22);
    A2.display();
}

