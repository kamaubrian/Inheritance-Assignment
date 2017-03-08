#include <iostream>
#include <string>
#include <fstream>

using namespace std;
ofstream sDetails;



void getCredentials();
void getStudentDetails();
void getTeacherDetails();
void giveChoice();
void getCollegeDetails();

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
protected:
    string Major;
    int year;

public:
    void setMajor(string mj){
        Major=mj;
    }
    string getMajor(){
        return Major;
    }
    void setYear(int yr){
        year=yr;
    }
    int getYear(){
        return year;
    }

};

class Teacher: public Person{
protected:
    string subject;
    double salary;
public:
    void setSubject(string sub){
        subject=sub;
    }
    string getSubject(){
        return subject;
    }
    void setSalary(double sal){
        salary=sal;
    }
    double getSalary(){
        return salary;
    }

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
    sDetails<<"Name is:\t"<<pi.getName()<<endl;
    sDetails<<"Gender is:\t"<<pi.getGender()<<endl;
    sDetails<<"Age is:\t"<<pi.getAge()<<endl;
    cin.get();


}
void giveChoice(){
    cout<<"1.Student.\n2.Teacher"<<endl;
    int choice;
    cin>>choice;
    switch (choice){
        case 1:
        //Code For Student Choice.
        getCredentials();
        getStudentDetails();
        break;

    case 2:
        //code for Teacher Choice.
        getCredentials();
        getTeacherDetails();
        break;

    default:
        cout<<"Unable To Proceed"<<endl;
        break;

    }
}
void getStudentDetails(){

    Student spi;
    string id_no;
    double grade_point;
    cout<<"Enter Identification Number\t:"<<endl;
    cin>>id_no;
    cout<<"Enter Grade Point Average:\t"<<endl;
    cin>>grade_point;
    spi.setMyID(id_no);
    spi.setGPA(grade_point);
    bool choice;
    cout<<"Enter 1 for [FOR COLLEGE STUDENTS] or 0[EXIT]"<<endl;
    cin>>choice;
    if(choice ==true){
        getCollegeDetails();
    }
}
void getTeacherDetails(){
    Teacher t1;
    string subject;
    double salary;
    cout<<"Enter Subject:\t"<<endl;
    cin>>subject;
    cout<<"Enter Salary"<<endl;
    cin>>salary;
    t1.setSubject(subject);
    t1.setSalary(salary);
    t1.getSubject();
    t1.getSalary();
}
void getCollegeDetails(){

    collegeStudent st1;
    string mj;
    int yr;
    cout<<"Enter Major"<<endl;
    cin>>mj;
    cout<<"Enter Year"<<endl;
    cin>>yr;
    st1.setMajor(mj);
    st1.setYear(yr);
    st1.getMajor();
    st1.getYear();



}
