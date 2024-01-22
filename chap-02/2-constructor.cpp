#include <iostream>
#include <string>

class Person
{
public:

    Person(std::string name, std::string surname)
        : _name {name}
        , _surname {surname}
    {
        //std::cout << "Person named " << name << " has just been born!" << std::endl;
    }

    std::string  get_fullname() const { return _name + " " + _surname; }
    unsigned int get_age() const { return _age; }

    //void set_name(std::string name) { _name = name; }
    //void set_age(unsigned int age) { _age = age; }
    void wait(unsigned int years) { _age+=years; }

private:
    std::string  _name;
    std::string _surname;
    unsigned int _age = 0u;
};

int main()
{
    Person p {"Brune", "Wayne"};

    //p.set_name("Batman");
    //p.set_age(23);
    p.wait(23);

    std::cout << "Person named '" << p.get_fullname() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
