#pragma once
#include <string>
#include "bookmgmt/Resource.h"

namespace bookmgmt {
class Thesis: public Resource {
public:
Thesis(std::string id, std::string title, std::string university, std::string degree,
std::string supervisor, std::string publisher, int year, Money unitPrice);

ResourceCategory category() const override {
return ResourceCategory::Thesis;
}

protected:
void printDetails(std::ostream& os)const override;

private:
std::string university_;
std::string degree_;
std::string supervisor_;
};
}
