#include "header.hpp"

Node::Node(string val_)//конструктор узла
{
    val = val_;
    next = nullptr;
}

list::list()//конструктор списка
{
    first = nullptr;
    last = nullptr;
    size = 0;
}

bool list::is_empty() //проверка есть ли узлы
{
    return first == nullptr;
}

void list::push_back(string str) //добавление узла в конец
{
    Node* p = new Node(str);
    if (is_empty()) 
    {
        first = p;
        last = p;
        size++;

        auto time = std::chrono::system_clock::now();
        std::time_t T = std::chrono::system_clock::to_time_t(time);
        p->time = ctime(&T);

        return;
    }
    last->next = p;
    last = p;
    size++;

    //
    auto time = std::chrono::system_clock::now();
    std::time_t T = std::chrono::system_clock::to_time_t(time);
    p->time=ctime(&T);

}

void list::print() //печать списка
{
    if (is_empty()) return;
    Node* p = first;
    while (p)
    {
        cout << p->val<<'\n';
        p = p->next;
    }
    cout << endl;
}

void list::remove_first() //удаление элта из начала списка
{
    if (is_empty()) return;
    Node* p = first;
    first = p->next;
    delete p;
    size--;
}

Node* list::operator[] (const int index) //обращение к узлу по индексу
{
    if (is_empty()) return nullptr;
    Node* p = first;
    for (int i = 0; i < index; i++) 
    {
        p = p->next;
        if (p== nullptr) return nullptr;
    }
    return p;
}
void list::Copy_first(int num)
{
    if (is_empty()) return;

    int s = 0;
    Node* p = first;
    string temp = p->val;
    if (num < 0 || num >= size)
        cout << "There is no str in this number\n";
    else
    {
        while (s < num) 
        {
            p = p->next;
            s++;
        }
        p->val =temp;
    }
}
void list::delete_queue()
{
    if (is_empty()) return;

    int temp = size;
    while (temp >= 0)
    {
        remove_first();
        temp--;
    }
    cout << "deleted!\n";
}
