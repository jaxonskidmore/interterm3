#include <iostream>
#include <iomanip>
using namespace std;

class Pet
{
public:
  string name;
  int age;
  string type;
  double weight;
//public variables
  void setName(string name);
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);
//setters
  string getName();
  int getAge();
  string getType();
  double getWeight();
//getters

};
  void Pet::setName(string petName)
  {
    name = petName;
  }
  void Pet::setAge(int petAge)
  {
    age = petAge;
  }
  void Pet::setType(string petType)
  {
    type = petType;
  }
  void Pet::setWeight(double petWeight)
  {
    weight = petWeight;
  }
//4 void mutator functions to get characteristics
  string Pet::getName()
  {
    return name;
  }
  int Pet::getAge()
  {
    return age;
  }
  string Pet::getType()
  {
    return type;
  }
  double Pet::getWeight()
  {
    return weight;
  }
//4 accessor functions to return characteristics

int main()
{
  Pet pet1;
  pet1.setName("Peaches");
  pet1.setAge(2);
  pet1.setType("Cat");
  pet1.setWeight(8.8);
//insance#1 creation
  cout << "Name: " << pet1.getName() << endl;
  cout << "Age: " << pet1.getAge() << endl;
  cout << "Type: " << pet1.getType() << endl;
  cout << "Weight: " << pet1.getWeight() << endl;
//calling
  Pet pet2;
  pet2.setName("Spartacus");
  pet2.setAge(12);
  pet2.setType("Cat");
  pet2.setWeight(24.8);
//insance#2 creation
  cout << "Name: " << pet2.getName() << endl;
  cout << "Age: " << pet2.getAge() << endl;
  cout << "Type: " << pet2.getType() << endl;
  cout << "Weight: " << pet2.getWeight() << endl;
//calling
  return 0;

}
