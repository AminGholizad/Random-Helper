#include "rand.hpp"
#include <iostream>
#include <vector>
int main() {
  auto rand_double{rnd::rand()};
  auto rand_int{rnd::unifrnd(1, 5)}; // NOLINT(readability-magic-numbers,
                                     // cppcoreguidelines-avoid-magic-numbers)
  auto rand_float{rnd::unifrnd<float>(
      0.1F, 0.5F)}; // NOLINT(readability-magic-numbers,
                    // cppcoreguidelines-avoid-magic-numbers)
  std::vector<std::string> strings_vector{"Hello!", "Hi!", "How are you?",
                                          "Good bye!"};
  auto selected_string{*rnd::select_randomly(
      strings_vector.begin(),
      strings_vector.end())}; // select a random entry from the vector
  std::cout << "random double between 0 and 1=" << rand_double << '\n';
  std::cout << "random int between 1 and 5=" << rand_int << '\n';
  std::cout << "random float between 0.1 and 0.5=" << rand_float << '\n';
  std::cout << "randomly selected string=" << selected_string << '\n';
  return 0;
}
