#include "MyFirstTest.h"

void MyFirstTest::initTestCase()
{ qDebug("called before everything else");}

void MyFirstTest::myFirstTest()
{
    QVERIFY(1 == 1);
}

void MyFirstTest::mySecondTest()
{
    QVERIFY(1==1);
}

void MyFirstTest::cleanupTestCase()
{
    qDebug("called after myFirstTest and mySecondTest");
}
