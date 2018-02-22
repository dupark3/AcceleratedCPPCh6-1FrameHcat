#ifndef GUARD_width_h
#define GUARD_width_h

#include <string>
#include <vector>

typedef std::string::size_type string_size;
typedef std::vector<std::string>::const_iterator vec_iter;

string_size width(const std::vector<std::string>&);

#endif // GUARD_width_h
