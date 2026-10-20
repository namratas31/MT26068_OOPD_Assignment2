#pragma once

#include <string>
#include "bookmgmt/Resource.h"

namespace bookmgmt {

class EBook : public Resource {
public:
	EBook(std::string id, std::string title, std::string publisher, int year, Money unitPrice, std::string fileFormat);

const std::string& fileFormat() const {
return fileFormat_;
}

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
};
}
