#include <iostream>
#include <string>

class Message {
private:
    std::string message;

public:
    Message(const std::string& msg = "Default Message") : message(msg) {}

    void print() const {
        std::cout << message << std::endl;
    }

    void print(const std::string& additionalMessage) const {
        std::cout << message << " " << additionalMessage << std::endl;
    }
};

int main() {
    Message msg1("Hello, World!");
    msg1.print();
    msg1.print("This is an additional message.");

    Message msg2;
    msg2.print();
    msg2.print("This is an additional message.");

    return 0;
}
