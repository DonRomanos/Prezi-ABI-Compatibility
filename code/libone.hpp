#pragma once

#include <string>
#include <memory>
#include <vector>

#include "libone_export.h"

inline namespace v1 {}

namespace v1
{
	LIBONE_EXPORT std::string tell_me_your_name();
}

class LIBONE_EXPORT AnInterface
{
public:
	virtual ~AnInterface() = 0;
	virtual void do_something_new() = 0;
	virtual void do_something() = 0;
};

LIBONE_EXPORT std::unique_ptr<AnInterface> give_me_an_interface();

LIBONE_EXPORT std::vector<int>::const_iterator find(const std::vector<int>& in, int x);