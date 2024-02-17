#include <cstdlib>
#include <cstring>

class N {
public:
  N(int param1) : variable1(param1), annotation(nullptr){};
  void setAnnotation(char *s) {
    size_t size;
    size = std::strlen(s);
    memcpy(this + 4, s, size);
  }
  int variable1;
  char *annotation;
  int operator+(const N &rhs) { return this->variable1 + rhs.variable1; }
};

int main(int ac, char **av) {

  if (ac < 2) {
    std::exit(1);
  }
  N *obj1 = new N(5);
  N *obj2 = new N(6);
  obj1->setAnnotation(av[1]);
  return obj1->operator+(*obj2);
}
