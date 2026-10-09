// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
struct student
{
    int rno;
    char name[10];
    float fees;
    struct marks{
        int maths;
        int physics;
        int chemistry;
    }m;
};
void input(student &s){
    cout<<"Enter the fees\n";
    cin>>s.fees;
    cout<<"Enter the roll number\n";
    cin>>s.rno;
    cout<<"Enter the name \n";
    cin>>s.name;
    cout<<"Enter the marks of each subject"<<endl;
    cout<<"Maths: "<<endl;
    cin>>s.m.maths;
    cout<<"Physics: "<<endl;
    cin>>s.m.physics;
    cout<<"Chemistry: "<<endl;
    cin>>s.m.chemistry;
}
void display(student &s){
    cout<<endl<<"Student Details\n";
    cout<<"Fees:  "<<s.fees<<endl;
    cout<<"Roll Number:  "<<s.rno<<endl;
    cout<<"Student name:  "<<s.name<<endl;
    cout<<"\n Marks \n";
    cout<<"Maths: "<<s.m.maths<<endl;
    cout<<"Physics: "<<s.m.physics<<endl;
    cout<<"Chemistry: "<<s.m.chemistry<<endl;
}

int main(){
    student s;
    input(s);
    display(s);
    
    return 0;
}
