#include <tchar.h>
#include <iostream>
using namespace std;

class CMyImage {
   public:
    CMyImage(int nHeight, int nWidth)
        : m_nHeight(nHeight), m_nWidth(nWidth) {
        cout << "CMyImage(int, int)" << endl;
    }

    int getHeight() const { return m_nHeight; }
    int getWidth() const { return m_nWidth; }

   protected:
    int m_nHeight;
    int m_nWidth;
};

class CMyShape {
   public:
    CMyShape(int nType) : m_nType(nType) {
        cout << "CMyShape(int)" << endl;
    }

    int getType() const { return m_nType; }

   protected:
    int m_nType;
};

class CMyPicture : public CMyImage, public CMyShape {
   public:
    CMyPicture() : CMyImage(200, 120), CMyShape(1) {
        cout << "CMyPicture()" << endl;
    }
};

int _tmain(int argc, _TCHAR* argv[]) {
    CMyPicture a;

    cout << "Width: " << a.getWidth() << endl;
    cout << "Height: " << a.getHeight() << endl;
    cout << "Type: " << a.getType() << endl;

    return 0;
}