#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *LinkList;

// 头插法
LinkList List_HeadInsert(LinkList L) {
    LNode *s; int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    printf("please input a value: ");
    scanf("%d", &x);
    printf("\n");
    while(x!=9999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->next = L->next;
        L->next = s;
        s->data = x;
        printf("please input a value: ");
        scanf("%d", &x);
        printf("\n");
    }
    return L;
}
// 尾插法
LinkList List_TrilInsert(LinkList L) {
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    LNode *s,*r = L;
    printf("please input a value: ");
    scanf("%d",&x);
    while(x!=9999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        printf("please input a value: ");
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}

// 按序号查找节点
LNode *GetElem(LinkList L, int i) {
    int j = 1;
    LNode *p = L->next;
    if(i==0) {
        return L;
    }
    if(i<1){
        return NULL;
    }
    while(p&&j<i) {
        p = p->next;
        j++;
    }
    return p;
}

// 按照元素值查找节点
LNode *LocateElem(LinkList L, int e) {
    LNode *r = L->next;
    while(r!=NULL&&r->data!=e){
        r = r->next;
    }
    return r;
}

int main() {

    LinkList L = NULL;
    // 头插法
    // L = List_HeadInsert(L);
    // 尾插法
    L = List_TrilInsert(L);
    LNode *s;
    s = L;
    while(s->next != NULL) {
        s = s->next;
        printf("%d\t", s->data);
    }
    printf("\n");
    printf("按序号查找节点\n");
    printf("请输出节点序号：");
    int index;
    scanf("%d",&index);
    LNode *p = GetElem(L, index);
    if(p!=NULL) {
        printf("序号%d所属节点的值为:%d", index, p->data);
    }else {
        printf("未找到！");
    }
    printf("\n");
    printf("按照节点值查找节点\n");
    int value;
    printf("请输出节点值：");
    scanf("%d", &value);
    p = LocateElem(L, value);
    if(p!=NULL) {
        printf("所属节点的值为:%d",p->data);
    }else {
        printf("未找到！");
    }


}