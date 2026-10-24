#include "bookmgmt/AudioBook.h"

#include<ostream>
#include<stdexcept>
#include<utility>

namespace bookmgmt {

AudioBook::AudioBook(std::string id, std::string title, std::vector<std::string> authors,
std::string isbn, std::string publisher,int year, Money unitPrice,std::string narrator, 
int durationMinutes):
Book(std::move(id), std::move(title), std::move(authors), std::move(isbn),
std::move(publisher),year, unitPrice),narrator_(std::move(narrator)),
durationMinutes_(durationMinutes){
if(durationMinutes_ <=0) {
throw std::invalid_argument("duration must be positive");
}}
void AudioBook::printDetails(std::ostream& os)const{
Book::printDetails(os);
os<<" narrator: "<<narrator_<<"\n"
<<" duration (minutes): "<< durationMinutes_ <<"\n";
}}

