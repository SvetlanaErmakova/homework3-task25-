#include <iostream>
#include <string>
#include <chrono>
#include <ctime>

using namespace std;

struct Node 
{
    string time; //��������� �����
    string val;//������
    Node* next;

    Node(string val);//����������� ����
};

struct list 
{
    Node* first;
    Node* last;
    int size;

    list();//����������� ������

    //�������
    bool is_empty();
    void push_back(string str);
    void print();
    void remove_first();
    void Copy_first(int num);
    void delete_queue();
    Node* operator[] (const int index);
};

#pragma once
