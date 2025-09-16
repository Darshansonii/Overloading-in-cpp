// Darshan Soni
// 24070123034

#include <iostream>
using namespace std;

class UserInfo {
public:
    void show(string name) {
        cout << "Name: " << name << endl;
    }

    void show(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void show(string name, string city) {
        cout << "Name: " << name << ", City: " << city << endl;
    }

    void show(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    UserInfo u;

    u.show("Darshan");
    u.show("Darshan", 19);
    u.show("Darshan", "Pune");
    u.show("Darshan", 19, "Pune");

    return 0;
}

// OUTPUT
// Name: Darshan
// Name: Darshan, Age: 19
// Name: Darshan, City: Pune
// Name: Darshan, Age: 19, City