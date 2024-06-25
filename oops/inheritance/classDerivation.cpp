#include <iostream>
using namespace std;
class mother {
protected:
  int mProc;

public:
  int mPubl;

public:
  int mPriv;
};
class daughter : private mother {
private:
  double dPriv;

public:
  void dFoo();
};

void daughter::dFoo() {
  mPriv = 10;
  mProc = 20;
}

class grandDaughter : public daughter {
private:
  double gPriv;

public:
  void gFoo();
};

int main() { return 0; }
