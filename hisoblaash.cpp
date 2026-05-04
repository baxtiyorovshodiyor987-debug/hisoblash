using namespace std;

// Abstraksiya + Inkapsulyatsiya
class Person {
private:
    string name;

public:
    Person(string n) {
        name = n;
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    // Polimorfizm uchun virtual funksiya
    virtual void introduce() {
        cout << "Men insonman: " << name << endl;
    }
};

// Merosxo‘rlik
class Student : public Person {
public:
    Student(string n) : Person(n) {}

    void introduce() override {
        cout << "Men talabaman: " << getName() << endl;
    }
};

int main() {
    Student s("Ali");
    s.introduce();
}
