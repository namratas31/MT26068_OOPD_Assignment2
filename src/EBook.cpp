#include "bookmgmt/EBook.h"

#include <ostream>
#include <utility>

namespace bookmgmt {

EBook::EBook(std::string id, std::string title, std::string publisher,int year, Money unitPrice, std::string fileFormat,
std::vector<std::string> authors, std::string isbn, bool drmProtected)
:ElectronicResource(std::move(id), std::move(title),std::move(publisher),year,unitPrice,"",LicenseModel::Perpetual,Money{})
,fileFormat_(std::move(fileFormat)),authors_(std::move(authors)), isbn_(std::move(isbn)), drmProtected_(drmProtected) {}

void EBook::printDetails(std::ostream& os) const {
os<< " file format: "<< fileFormat_<< "\n"<<" ISBN:" <<isbn_<< "\n" <<
" DRM protected:"<<(drmProtected_?"yes":"no")<<"\n"<<" authors:";

for(std::size_t i=0; i<authors_.size();++i){
if(i>0) os << ", ";
os<<authors_[i];
}
os<<"\n";
}}
