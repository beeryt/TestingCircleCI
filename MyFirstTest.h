#ifndef MYFIRSTTEST_H
#define MYFIRSTTEST_H

#include <QObject>
#include <QTest>

class MyFirstTest : public QObject
{
    Q_OBJECT
private slots:
    void initTestCase();
    void myFirstTest();
    void mySecondTest();
    void cleanupTestCase();
};

#endif // MYFIRSTTEST_H
