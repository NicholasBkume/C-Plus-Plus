#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
    std::string name {"Account"};
    double balance{ 0.0 };

    bool deposit(double);
    bool withdrawal(double);
};

#endif // ACCOUNT_H
