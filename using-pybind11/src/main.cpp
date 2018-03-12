#include <pybind11/pybind11.h>
#include "transaction.cpp"

namespace py = pybind11;


PYBIND11_MODULE(transaction, m){
    py::class_<Transaction>(m, "Transaction")
            .def(py::init<std::string, std::string, float>())
            .def_readwrite("sender", &Transaction::sender)
            .def_readwrite("recipient", &Transaction::recipient)
            .def_readwrite("amount", &Transaction::amount)
            .def("ToString", &Transaction::ToString);
}

