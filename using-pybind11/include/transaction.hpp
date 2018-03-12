#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP


#include <vector>
#include <string>


class Transaction{

public:
    std::string sender;
    std::string recipient;
    float amount;

    Transaction(std::string sender, std::string recipient, float amount);

    std::string ToString() const;

private:

};

#endif // TRANSACTION_HPP
