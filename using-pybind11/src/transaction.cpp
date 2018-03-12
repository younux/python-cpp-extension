#include "transaction.hpp"


Transaction::Transaction(std::string sender, std::string recipient, float amount): sender(sender),
    recipient(recipient), amount(amount)
{

}

std::string Transaction::ToString() const{
    return sender + recipient + std::to_string(amount);
}
