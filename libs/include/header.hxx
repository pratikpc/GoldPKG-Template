#pragma once
#include <boost/array.hpp>
#include <utility>

int sum(const int first, const int second);

template <typename T, std::size_t N> constexpr auto CreateArray1ToN() {
  static_assert(N > 0, "Array Size Must be greater than Zero");
  boost::array<T, N> arr{};
  for (std::size_t i = 0; i < arr.size(); ++i)
    arr[i] = i;
  return arr;
}
