#include <iostream>
#include <vector>
#include <string>

class person {
private:
    std::string name;
    int age;

public:
    void setName(std::string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    std::string getName() { return this->name; }
    int getAge() { return this->age; }
    virtual void getInfo() {
        std::cout << "Name: " << this->name << ", Age: " << this->age << std::endl;
    }
    virtual ~person() {}
};

class student : public person {
private:
    char grade;

public:
    void setGrade(char g) { this->grade = g; }
    char getGrade() { return this->grade; }
    void getInfo() override {
        std::cout << "Name: " << getName()
                  << ", Age: " << getAge()
                  << ", Grade: " << grade << std::endl;
    }
};

int main() {
    person p1;
    p1.setName("abc");
    p1.setAge(20);

    student p2;
    p2.setName("def");
    p2.setAge(21);
    p2.setGrade('A');

    std::vector<person*> people;
    people.push_back(&p1);
    people.push_back(&p2);

    for (auto p : people) {
        p->getInfo();
    }

    return 0;
}
