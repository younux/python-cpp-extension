#include "blockchain.hpp"


Blockchain::Blockchain(uint32_t difficulty): _difficulty(difficulty){
    // Genesis block
    _chain.emplace_back(Block(0));
}

void Blockchain::NewBlock(Block newBlock){
    newBlock.prevHash = this->GetLastBlock().GetHash();
    newBlock.SetIndex(this->_chain.size());
    newBlock.MineBlock(_difficulty);
    this->_chain.push_back(newBlock);
}

Block Blockchain::GetLastBlock() const{
    return this->_chain.back();
}

uint32_t Blockchain::GetDifficulty() const {
    return _difficulty;
}

std::vector<Block> Blockchain::GetChain() const {
    return _chain;
}


