#include "Duck.h"
#include "MallarDuck.h"
#include "Turkey.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"

int main(){
    Duck* duck = NULL;
    MallardDuck* mallarDuck = new MallardDuck();
    Turkey* turkey = new WildTurkey();
    TurkeyAdapter* turkeyAdapter = new TurkeyAdapter(turkey);
    duck = mallarDuck;
    cout << "Duck say:" << endl;
    duck->fly();
    duck->quack();
    duck = turkeyAdapter;
    cout<< "Turkey say:" << endl;
    duck->fly();
    duck->quack();

    delete mallarDuck;
    delete turkeyAdapter;
    delete turkey;
    
    system("PAUSE");
    return 0;
}