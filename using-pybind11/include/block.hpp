#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <cstdint>
#include <iostream>
#include <string.h>
#include <ctime>
#include <vector>
#include "transaction.hpp"


class Block{
public :
    std::string prevHash;


    Block();
    Block(const std::vector<Transaction> &transacions);
    Block(uint32_t index);
    Block(uint32_t index, const std::vector<Transaction> &transacions);

    void NewTransaction(std::string sender, std::string recipient, float amount);
    void MineBlock(uint32_t difficulty);

    uint32_t GetIndex() const;
    void SetIndex(uint32_t index);
    time_t GetTime() const;
    int64_t GetNonce() const;
    std::vector<Transaction> GetTransactions() const;
    std::string GetHash() const;

private:
    uint32_t _index;
    time_t _time;
    int64_t _nonce;
    std::vector<Transaction> _transactions;
    std::string _hash;


    std::string _CalculateHash() const;
    std::string _TransactionsToString() const;

};



#endif // BLOCK_HPP
