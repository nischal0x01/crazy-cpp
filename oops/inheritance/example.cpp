#include <iostream>
using namespace std;
class mother {
public:
  int mPub;

protected:
  int mProc;

private:
  int mPriv;
};

class daughter : mother {
private:
  int dPriv;

public:
  void dfoo();
};

void daughter ::dfoo() {
  mPub = 10;
  mProc = 1;
  dPriv = 2;
  cout << mPub << "\n" << mProc << "\n" << dPriv << endl;
}

class grandDaughter : public daughter {
private:
  int gPriv;

public:
  void gfoo();
};

void grandDaughter::gfoo() {
  mPub = 10;
  mProc = 1;
  gPriv = 2;
  cout << mPub << "\n" << mProc << "\n" << gPriv << endl;
}

int main {
  daughter d1;
  d1.dfoo();
  grandDaughter gd1;
  gd1.getfoo();
  gd1.dfoo();
};
