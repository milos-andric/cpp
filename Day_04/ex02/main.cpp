#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"


void cry_all(Squad *sq)
{
  std::cout << "start call all Space Marine" << '\n';
  std::cout<< "lol\n";
  for (int i = 0; i < sq->getCount(); ++i)
  {
    std::cout<< "lol1\n";
    ISpaceMarine *cur = sq->getUnit(i);
    std::cout<< "lol2\n";
    (void)cur;
    std::cout << "n ° " << i << ": ";
    std::cout<< "lol3\n";
    cur->battleCry();
    std::cout<< "lol4\n";
  }
  std::cout << "end call all Space Marine" << '\n';
}
int main()
{
  std::cout << "Ennoncé\n";
  ISpaceMarine *bob = new TacticalMarine;
  ISpaceMarine *jim = new AssaultTerminator;
  ISquad *      vlc = new Squad;

  vlc->push(bob);
  vlc->push(jim);
  for (int i = 0; i < vlc->getCount(); ++i)
  {
    ISpaceMarine *cur = vlc->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
  }
  delete vlc;
  std::cout << "\n\n My Creation\n";
  Squad *       vlc1 = new Squad;
  ISpaceMarine *jim2 = new AssaultTerminator;
  vlc1->push(jim2);
  ISpaceMarine *bob2 = new TacticalMarine;
  vlc1->push(bob2);
  ISpaceMarine *jim3 = new AssaultTerminator;
  Squad *       vlc2 = new Squad;
  vlc2->push(jim3);
  cry_all(vlc2);
  *vlc2 = *vlc1;
  delete vlc1;
  cry_all(vlc2);
  Squad *vlc3 = new Squad(*vlc2);
  delete vlc2;
  cry_all(vlc3);
  delete vlc3;
}