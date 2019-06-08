#include <tchar.h>
#include <cstring>
#include <iostream>
using namespace std;

class CNode {
    friend class CMyList;

   public:
    explicit CNode(const char* pszName) {
        strcpy(m_szName, pszName);  // gcc에는 strcpy_s 함수가 없음
    }

   private:
    //단일 연결 리스트로 관리할 데이터
    char m_szName[32];
    CNode* pNext = nullptr;
};

class CMyList {
   public:
    CMyList() : m_HeadNode("Dummy Head") {}
    ~CMyList() {
        CNode* pNode = m_HeadNode.pNext;
        CNode* pDelete = nullptr;

        while (pNode) {
            pDelete = pNode;
            pNode = pNode->pNext;

            cout << pDelete->m_szName << endl;
            delete pDelete;
        }

        m_HeadNode.pNext = nullptr;
    }

    void AddNewNode(const char* pszName) {
        CNode* pNode = new CNode(pszName);

        // 리스트에 새로운 노드를 추가
        pNode->pNext = m_HeadNode.pNext;
        m_HeadNode.pNext = pNode;
    }

    void Print() {
        CNode* pNode = m_HeadNode.pNext;
        while (pNode) {
            cout << pNode->m_szName << endl;
            pNode = pNode->pNext;
        }
    }

   private:
    CNode m_HeadNode;
};

class CMyUI {
   public:
    int PrintMenu() {
        system("cls");
        cout << "[1] add\t"
             << "[2] print\t"
             << "[0] Exit\n"
             << endl;

        cout.flush();
        int nInput = 0;
        cin >> nInput;
        return nInput;
    }

    void Run() {
        char szName[32];
        int nInput = 0;

        switch (nInput = PrintMenu()) {
            case 1:  //add
                cout << "이름: ";
                cout.flush();
                cin >> szName;
                m_list.AddNewNode(szName);
                break;
            case 2:  //print
                m_list.Print();
                break;
            default:
                break;
        }
    }

   private:
    // ui 클래스 내부에 자료구조가 포함된다.
    CMyList m_list;
};

int _tmain(int argc, _TCHAR* argv[]) {
    // 프로그램 시작
    CMyUI ui;
    ui.Run();

    return 0;
}