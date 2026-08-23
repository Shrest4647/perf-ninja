#include <vector>

// Assume those constants never change
constexpr int N = 1000000;
constexpr int minRandom = 0;
constexpr int maxRandom = 100;

struct S
{
  unsigned l : 14; // 2 bytes
  unsigned i : 7;  // 1 byte
  unsigned s : 7;  // 1 byte
  bool b : 1;
  float d; // 4 bytes

  bool operator<(const S &s) const { return this->i < s.i; }
};

void init(std::vector<S> &arr);
S create_entry(int first_value, int second_value);
void solution(std::vector<S> &arr);
