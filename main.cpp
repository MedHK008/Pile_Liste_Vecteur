#include <iostream>
#include "Pile.h"
#include "TestPPile.h"

using namespace std;
int main() {
    TestPPile<int> tester;
    tester.testEstVide();
    tester.testEmpile();
    tester.testDepile();
    tester.testSommet();
    tester.testAffiche();
    tester.testInvertStack();
    tester.testIsPalindrome();
    tester.testCheckEquation();

    return 0;
}
