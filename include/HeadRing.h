#ifndef __HEADRING_H
#define __HEADRING_H

#include "DatList.h"

class THeadRing: public TDatList {
protected:
    PTDatLink pHead; // ���������, pFirst - ����� �� pHead
public:
    THeadRing();
    ~THeadRing();
    // ������� �������
    virtual void InsFirst(PTDatValue pVal = nullptr); // ����� ���������
    // �������� �������
    virtual void DelFirst(void); // ������� ������ �����
};
#endif
