#include<iostream>
#include<string>
using namespace std;

class person
{
private:
   int age ;
   string name;
public:
   person(int age, string name)
   {
       this->age = age;
       this->name = name;
   }
   void printValue()
   {
       cout<< "Age is :"<< age << endl;
       cout << "Name is :" << name << endl;
   }   
};
int main()
{
    person a(41,"krishna");
    a.printValue();

    return 0;
}