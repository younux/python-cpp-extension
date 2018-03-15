#include "block.hpp"
#include "sha256.hpp"
#include <sstream>

Block::Block(){
    this->_nonce = -1;
    this->_index = -1;
    this->_time = time(nullptr);
}

Block::Block(const std::vector<Transaction> &transacions): _transactions(transacions)
{
    this->_nonce = -1;
    this->_index = -1;
    this->_time = time(nullptr);
}

Block::Block(uint32_t index): _index(index)
{
    this->_nonce = -1;
    this->_time = time(nullptr);
}

Block::Block(uint32_t index, const std::vector<Transaction> &transacions): _index(index), _transactions(transacions)
{
    this->_nonce = -1;
    this->_time = time(nullptr);
}

time_t Block::GetTime() const{
    return _time;
}

int64_t Block::GetNonce() const{
    return _nonce;
}

std::vector<Transaction> Block::GetTransactions() const{
    return _transactions;
}

std::string Block::GetHash() const{
    return this->_hash;

}

uint32_t Block::GetIndex() const{
    return _index;
}

void Block::SetIndex(uint32_t index){
    _index = index;
}

void Block::NewTransaction(std::string sender, std::string recipient, float amount){
    this->_transactions.push_back(Transaction(sender, recipient, amount));
}

void Block::MineBlock(uint32_t difficulty){
    char cstr[difficulty+1];
    for(int i = 0; i<difficulty; i++){
        cstr[i] = '0';
    }
    cstr[difficulty] = '\0';

    std::string str(cstr);

    do{
        this->_nonce ++;
        // std::cout << "Nonce : " << this->_nonce << std::endl;
        this->_hash = this->_CalculateHash();
    } while ((this->_hash).substr(0, difficulty) != str);

    std::cout << "Block mined - Hash : " << this->_hash << " - Nonce : " << this->_nonce << std::endl;

}


std::string Block::_CalculateHash() const{
    std::stringstream ss;
    ss << _index << _time << _TransactionsToString() << _nonce << prevHash;
    return(sha256(ss.str()));
}

std::string Block::_TransactionsToString() const{
    std::string s = "";
    for(unsigned int i=0; i<_transactions.size(); i++){
        s = s + (this->_transactions).at(i).ToString();
    }
    return s;
}



