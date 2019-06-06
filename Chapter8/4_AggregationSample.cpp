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
    //참조 멤버는 반드시 초기화 목록을 이용해 초기화해야 한다.
    CMyUI(CMyList& rList) : m_list(rList) {}

    void PrintMenu() {
        system("cls");
        cout << "[1] add\t"
             << "[2] print\t"
             << "[3] Exit\n"
             << endl;
    }

    void Run() {
        char szName[32];
        int nInput = 0;

        switch (nInput) {
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
    // ui 클래스 내부에 자료구조 객체에 대한 참조만 존재한다.
    CMyList& m_list;
};

int _tmain(int argc, _TCHAR* argv[]) {
    // 자료구조와 ui 객체를 별도로 선언하고 연결한다.
    CMyList list;
    CMyUI ui(list);
    ui.Run;

    return 0;
}