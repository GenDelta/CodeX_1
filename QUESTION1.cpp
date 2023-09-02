/*Q1) Take input from the user. Ask for their full name, age, college name and display it as follows 
(Make sure to take a space between the name and the college name 
eg. Rohan Gandhi and Symbiosis Institute of Technology)
*/
# include<iostream>
using namespace std;

int main(){
    string name, college; int age;
    cout<<"Enter your name: "<<endl;
    getline(cin, name);
    cout<<"Enter your college: "<<endl;
    getline(cin, college);
    cout<<"Enter your age: "<<endl;
    cin>>age;
    cout<<"Hello, "<<name<<" I see you are "<<age<<" years old and are currently studying at "<<college<<endl;
    return 0;
}