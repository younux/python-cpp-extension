#include <pybind11/pybind11.h>
#include <pybind11/stl.h> // to enable STL containers automatic conversion

// cpp files are included because we need declarations and definitions
#include "sha256.cpp"
#include "transaction.cpp"
#include "block.cpp"
#include "blockchain.cpp"


namespace py = pybind11;


PYBIND11_MODULE(_blockchain, m){
    py::class_<Transaction>(m, "Transaction")
            .def(py::init<std::string, std::string, float>())
            .def_readwrite("sender", &Transaction::sender)
            .def_readwrite("recipient", &Transaction::recipient)
            .def_readwrite("amount", &Transaction::amount)
            .def("ToString", &Transaction::ToString);

    py::class_<Block>(m, "Block")
            .def(py::init<>())
            .def(py::init<const std::vector<Transaction>&>()) // (pybind STL type conversion involves a copy
            // operation that prevents pass-by-reference semantics.
            // See "Making opaque types" in pybind11 doc if pass-by-reference  is needed for STL
            .def(py::init<uint32_t>())
            .def(py::init<uint32_t, const std::vector<Transaction>&>()) // (pybind STL type conversion involves a copy
            // operation that prevents pass-by-reference semantics.
            // See Making opaque types in pybind doc if pass-by-reference  is needed for STL
            .def_readwrite("prevHash", &Block::prevHash)
            .def("NewTransaction", &Block::NewTransaction)
            .def("MineBlock", &Block::MineBlock)
            .def_property("index", &Block::GetIndex, &Block::SetIndex)
            .def_property_readonly("time", &Block::GetTime)
            .def_property_readonly("nonce", &Block::GetNonce)
            .def_property_readonly("transactions", &Block::GetTransactions)
            .def_property_readonly("hash", &Block::GetHash);

    py::class_<Blockchain>(m, "Blockchain")
            .def(py::init<uint32_t>())
            .def("NewBlock", &Blockchain::NewBlock)
            .def("GetDifficulty", &Blockchain::GetDifficulty)
            .def("GetChain", &Blockchain::GetChain);

}

