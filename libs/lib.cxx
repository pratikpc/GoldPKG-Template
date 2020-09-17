#include <utility>

#include <header-priv.hxx>
#include <header.hxx>

#include <boost/array.hpp>

int sum(const int first, const int second) {
  return first + second;
}

constexpr auto mul(const int first, const int second)
    -> decltype(first * second) {
  return first * second;
}
