#include <iostream>
#include <string>

using namespace std;
void getCredentials();
void giveChoice();

class Person{
protected:

    string myName;
    int myAge;
    string myGender;

public:

    void setName(string name){
        myName=name;

    }
    string getName(){
        return myName;

    }
    void setAge(int age){
        myAge=age;

    }
    int getAge(){
        return myAge;

    }
    void setGender(string gender){
        myGender=gender;
    }
    string getGender(){
        return myGender;

    }


};
class Student : public Person{
protected:
    string myIdNum;
    double myGPA;

public:

    void setMyID(string id){
        myIdNum=id;

    }
    string getmyId(){
        return myIdNum;
    }
    void setGPA(double gpa){
        myGPA=gpa;
    }
    double getGPA(){
        return myGPA;
    }


};
class collegeStudent: public Student
{
private:

    string subject;

public:


};

class Teacher: public Person{
public:



};



int main()
{
    giveChoice();


return 0;
}

void getCredentials(){


    string name,gender;
    int age;
    Person pi;
    cout<<"Enter Name:\t"<<endl;
    cin>>name;
    cout<<"Enter Gender[Male or Female]"<<endl;
    cin>>gender;
    cout<<"Enter Age:\t"<<endl;
    cin>>age;
    pi.setName(name);
    pi.setGender(gender);
    pi.setAge(age);
    cout<<"Name is:\t"<<pi.getName()<<endl;
    cout<<"Gender is:\t"<<pi.getGender()<<endl;
    cout<<"Age is:\t"<<pi.getAge()<<endl;


}
void giveChoice(){
    cout<<"1.Student.\n2.Teacher"<<endl;
    int choice;
    cin>>choice;
    switch (choice){
        case 1:
        getCredentials();
            //Code For Student Choice.
        break;

    case 2:
        getCredentials();
        //code for Teacher Choice.
        break;

    default:
        cout<<"Unable To Proceed"<<endl;
        break;


    }




}
