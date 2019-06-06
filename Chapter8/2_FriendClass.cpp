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

   private:
    CNode m_HeadNode;
};

int _tmain(int argc, _TCHAR* argv[]) {
    //메모리 추가/삭제 코드가 등장하지 않는다.
    CMyList list;
    list.AddNewNode("길동");
    list.AddNewNode("철수");
    list.AddNewNode("영희");

    return 0;
}