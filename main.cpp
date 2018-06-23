#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void lessT(int n1, int n2,int n3)
    {
        QVector<int>ve1(n1);
        for(int i1=0;i1<n1;i1++)
        {   ve1[i1] =qrand()%n2;    }
        QVector<int>lve1(n1);
        QVector<int>mve1(n1);
        QVector<int>qve1(n1);
        int j1=0, j2=0,j3=0;
        for(int i2=0;i2<n1;i2++)
        {
            if(ve1[i2] > n3)
            {   mve1[j1] = ve1[i2];  j1++;  }
            else if(ve1[i2] < n3)
            {   lve1[j2] = ve1[i2]; j2++;   }
            else
            {   qve1[j3]=ve1[i2]; j3++;     }
        }
        qDebug() << ve1 << n3 << " \n  more " << mve1 <<  "\nless" <<lve1 << "\nequal "
                 << qve1 << "\n numbs of... " << "eq " <<j3 << "m " << j1
                 << "l " << j2;
    }


};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.lessT(40,200, 50);

    for(int i1=1;i1<20;i1++)
    {

    }
    return a.exec();
}
