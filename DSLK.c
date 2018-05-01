#include <stdio.h>
#include <stdlib.h>
struct Node              //Khai bao danh sach lien ket don(Moi nut chua mot so nguyen va con tro den nut ke tiep
{
    int n;
    Node *pNext;
};
struct SLL
{
    Node *pHead, *pTail;
};

void initSLL(SLL *list) //Khoi tao danh sach lien ket don
{
    list->pHead = list->pTail = NULL;
}
bool isSLLEmpty(SLL list)
{
    if (!list.pHead)        //Kiem tra danh sach lien ket don rong
    {
        return true;
    }
    return false;
}
void viewSLL(SLL list)     //In danh sach ra man hinh
{
    struct Node *pNode;
    if (isSLLEmpty(list))
    {
        printf("Single link list is empty\n");
    }
    else
    {
        pNode = list.pHead;
        while (pNode)
        {
            printf("%d\n", pNode->n);
            pNode = pNode->pNext;
        }
    }
}

Node *newNode(int k)   //Tao mot nut moi
{
    Node *pNode;
    pNode = (Node*)malloc(1 * sizeof(Node));
    if (!pNode)
    {
        return NULL;
    }
    pNode->n = k;
    pNode->pNext = NULL;
    return pNode;
}

bool insertHead(SLL *list, Node *node)  //Chen nut vao dau danh sach
{
    if (!node)
    {
        return false;
    }
    node->pNext = list->pHead;
    list->pHead = node;
    if (!list->pTail)
    {
        list->pTail = node;
    }
    return true;
}
int main()
{

}
