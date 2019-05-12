/*
    고급프로그래밍1 실습
    동물 클래스 만들기


    - 고양이와 토끼와 사람은 동물에 포함되고 학생은 사람에 포함됨.

    - 고양이와 사람과 학생 객체가 speak()메서드를 실행할 때 각각 meow, hello, I have a homework를 출력함.
      토끼는 speak() 메서드가 없다.

    - 객체에서 print()메서드를 실행하면 동물종류: (나이, 이름)을 출력함

    - Animal 클래스 내에서 객체의 개수를 세는 static 변수를 만든다.
*/

#include <cstring>
#include <iostream>

class Animal {
   protected:
    int age;           // Animal 클래스의 객체의 나이
    const char* name;  // Animal 클래스의 객체의 이름

    // 객체의 개수를 세는 static 변수
    // 생성자에서 ++, 소멸자에서 --
    static unsigned int animalCount,
        rabbitCount,
        catCount,
        personCount,
        studentCount;

   public:
    // Animal 클래스의 생성자
    Animal(const int age, const char* name) {
        Animal::animalCount++;
        this->setAge(age);
        this->setName(name);
    }

    // Animal 클래스의 소멸자
    // (소멸자는 나중에 사용할 예정)
    ~Animal() { Animal::animalCount--; }

    // 나이를 변경하는 메서드
    void setAge(const int age) { this->age = age; }

    // 동물의 나이를 return 하는 메서드
    int getAge() const { return this->age; }

    // 동물의 이름을 변경하는 메서드
    void setName(const char* name) { this->name = name; }

    // 동물의 이름을 return하는 메서드
    const char* getName() const { return this->name; }

    // 동물의 정보(나이,이름)을 출력하는 메서드
    void print() const {
        std::cout << "Animal: (" << this->getAge() << "," << this->getName() << ")"
                  << std::endl;
    }

    // 동물들의 개수를 출력하는 메서드
    static void animalCountStatistics() {
        std::cout << "*************************" << std::endl;
        std::cout << "      Statistics         " << std::endl;
        std::cout << "*************************" << std::endl;
        std::cout << " # of Animal  : " << Animal::animalCount << std::endl;
        std::cout << " # of Rabbit  : " << Animal::rabbitCount << std::endl;
        std::cout << " # of Cat     : " << Animal::catCount << std::endl;
        std::cout << " # of Person  : " << Animal::personCount << std::endl;
        std::cout << " # of Student : " << Animal::studentCount << std::endl;
        std::cout << "*************************" << std::endl;
    }
};

class Rabbit : public Animal {
   public:
    // Rabbit 클래스의 생성자
    Rabbit(const int age, const char* name) : Animal(age, name) { Animal::rabbitCount++; }

    // Rabbit 클래스의 소멸자
    ~Rabbit() { Animal::rabbitCount--; }

    // 토끼의 정보(나이, 이름)을 출력하는 메서드.
    // 부모 클래스의 print 메서드 오버라이딩
    void print() const {
        std::cout << "Rabbit: (" << this->getAge() << "," << this->getName() << ")"
                  << std::endl;
    }
};

class Cat : public Animal {
   public:
    // Cat 클래스의 생성자
    Cat(const int age, const char* name) : Animal(age, name) { Animal::catCount++; }

    // Cat 클래스의 소멸자
    ~Cat() { Animal::catCount--; }

    void speak() const { std::cout << "meow" << std::endl; }

    // 고양이의 정보(나이, 이름)을 출력하는 메서드.
    // 부모 클래스의 print 메서드 오버라이딩
    void print() const {
        std::cout << "Cat: (" << this->getAge() << "," << this->getName() << ")"
                  << std::endl;
    }
};

class Person : public Animal {
   public:
    Person(int age, const char* name) : Animal(age, name) { Animal::personCount++; }

    ~Person() { Animal::personCount--; }

    // Person 클래스의 두 객체의 나이를 비교하는 메서드
    int age_diff(const Person& other) const {
        return (this->getAge()) - (other.getAge());
    }

    void speak() const { std::cout << "Hello" << std::endl; }

    // 사람의 정보(나이, 이름)을 출력하는 메서드.
    // 부모 클래스의 print 메서드 오버라이딩
    void print() const {
        std::cout << "Person: (" << this->getAge() << "," << this->getName() << ")"
                  << std::endl;
    }
};

class Student : public Person {
   protected:
    const char* major;

   public:
    Student(const int age, const char* name, const char* major) : Person(age, name) {
        Animal::studentCount++;
        setMajor(major);
    }

    ~Student() { Animal::studentCount--; }

    // Student 클래스의 속성 중 하나인 전공을 변경하는 메서드
    void setMajor(const char* major) { this->major = major; }

    // Student 클래스의 속성 중 하나인 전공을 return하는 메서드
    const char* getMajor() const { return this->major; }

    void speak() const { std::cout << "I have a homework" << std::endl; }

    // 학생의 정보(나이, 이름, 전공)을 출력하는 메서드.
    // 부모 클래스의 print 메서드 오버라이딩
    void print() const {
        std::cout << "Student: (" << this->getAge() << "," << this->getName() << "," << this->getMajor() << ")"
                  << std::endl;
    }
};

unsigned int Animal::animalCount = 0,
             Animal::rabbitCount = 0,
             Animal::catCount = 0,
             Animal::personCount = 0,
             Animal::studentCount = 0;

int main(void) {
    // 미리 제공된 main 메서드

    Animal a1(2, "animal1");
    Animal a2(3, "animal2");

    Rabbit r1(4, "rabbit1");
    Rabbit r2(5, "rabbit2");

    Cat c1(6, "cat1");
    Cat c2(7, "cat2");

    Person p1(6, "person1");
    Person p2(7, "person2");

    Student s1(8, "student1", "CS");
    Student s2(9, "student2", "EE");

    a1.print();
    a2.print();

    r1.print();
    r2.print();

    c1.print();
    c2.print();

    c1.speak();
    c2.speak();

    p1.print();
    p2.print();

    p1.speak();
    p2.speak();

    std::cout << p1.age_diff(p2) << std::endl;

    s1.print();
    s2.print();

    s1.speak();
    s2.speak();

    std::cout << s1.age_diff(s2) << std::endl;

    Animal::animalCountStatistics();

    return 0;
}