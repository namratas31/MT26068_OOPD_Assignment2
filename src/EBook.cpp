#include "bookmgmt/EBook.h"

#include <ostream>
#include <utility>

namespace bookmgmt {

EBook::EBook(std::string id, std::string title, std::string publisher,int year, Money unitPrice, std::string fileFormat)
:Resource(std::move(id), std::move(title),std::move(publisher),year,unitPrice),fileFormat_(std::move(fileFormat)) {}

void EBook::printDetails(std::ostream& os) const {
os<< " file format: "<< fileFormat_<< "\n";
}}
