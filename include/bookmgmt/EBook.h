#pragma once

#include <string>
#include <vector>
#include "bookmgmt/ElectronicResource.h"

namespace bookmgmt {

class EBook : public ElectronicResource {
public:
	EBook(std::string id, std::string title, std::string publisher, int year, Money unitPrice, std::string fileFormat,
std::vector<std::string>authors, std::string isbn, bool drmProtected);

const std::string& fileFormat() const {
return fileFormat_;
}

const std::vector<std::string>& authors() const {
return authors_;
}

const std::string& isbn() const {
return isbn_;
}

bool drmProtected() const {
return drmProtected_;}

ResourceCategory category() const override {
return ResourceCategory::EBook;
}

bool isDigital() const override {
return true;
}

protected:
void printDetails(std::ostream& os)const override;

private:
std::string fileFormat_;
std::vector<std::string> authors_;
std::string isbn_;
bool drmProtected_;
};
}
