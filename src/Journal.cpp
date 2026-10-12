#include "bookmgmt/Journal.h"

#include <ostream>
#include <stdexcept>
#include <utility>

namespace bookmgmt {

Journal::Journal(std::string id, std::string title, std::string issn,std::string publisher,
int year, Money unitPrice, int issuesPerYear, int subscriptionYears)
: Resource(std::move(id), std::move(title), std::move(publisher),year,unitPrice),
issn_(std::move(issn)),issuesPerYear_(issuesPerYear),subscriptionYears_(subscriptionYears){
if (subscriptionYears_ <1){
throw std:: invalid_argument(
"subscription years must be atleast 1");}
if (issuesPerYear_ <1){
throw std::invalid_argument(
"issues per year must be atleast 1");
}}

Money Journal::costFor(int copies)const{
requirePositive(copies);
return unitprice() * copies * subscriptionYears_;
}

void Journal::printDetails(std::ostream& os) const {
os << " ISSN: " << issn_ << "\n"
<< " Issues per year: " << issuesPerYear_ << "\n"
<< " Subscription years: " << subscriptionYears_ << "\n";
}}

