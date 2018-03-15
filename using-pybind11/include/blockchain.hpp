#ifndef BLOCKCHAIN_HPP
#define BLOCKCHAIN_HPP


#include <cstdint>
#include <vector>
#include <block.hpp>


class Blockchain{
public:
    Blockchain(uint32_t difficulty);

    void NewBlock(Block newBlock);

    uint32_t GetDifficulty() const;
    std::vector<Block> GetChain() const;

private:
    uint32_t _difficulty;
    std::vector<Block> _chain;

    Block GetLastBlock() const;
};


#endif // BLOCKCHAIN_HPP
