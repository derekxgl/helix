#pragma once

#include <cstddef>

namespace helix {

namespace nasdaq {

class message_parser {
public:
    virtual ~message_parser() { }

    virtual void parse(const char *p, size_t size) = 0;
};

}

}