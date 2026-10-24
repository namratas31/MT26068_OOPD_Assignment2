#pragma once
#include<string>
#include<vector>
#include <ostream>
#include "bookmgmt/Book.h"

namespace bookmgmgt {

class AudioBook : public Book {
public :
AudioBook(std::string id, std::string title, std::vector<std::string> authors,
std::string isbn, std::string publisher, int year, Money unitPrice, std::string narrator,
int durationMinutes);
int durationMinutes() const {
return durationMinutes_;
}
ResourceCategory category() const override {
return ResourceCategory::AudioBook;}

protected:
void printDetails(std::ostream& os) const override;

private:
std::string narrator_;
int durationMinutes_;
};
}
