#include <iostream>
#include <stdexcept>
using namespace std;

class Vector {
private:
    int* m_list {nullptr}; // ponteiro para a lista
    int  m_size {0};       // numero de elementos na lista
    int  m_capacity {0};   // capacidade total da lista

public:
    // Construtor default: aloca uma lista com 
    // capacidade inicial igual a 16 e size = 0
    Vector(){
        m_size = 0;
        m_capacity = 16;
    }

    // Copy constructor: cria uma nova lista com os
    // mesmos elementos da lista passada como argumento
    Vector::Vector(const Vector& v){
         m_capacity = v.m_capacity;
        m_size = v.m_size;
        m_list = new int[m_capacity];

        for (int i = 0; i < m_size; i++)
        {
            m_list[i] = v.m_list[i];
        }
        
    }
    
    // Destrutor: libera memoria alocada
    Vector::~Vector(){
        delete[]m_list;
    } // O(1)

    // Retorna a capacidade atual da lista
    int Vector::capacity() const{
        return m_capacity;
    }

    // Retorna o numero de elementos na lista
    int Vector::size() const{
        return m_size;
        }// O(1)
    
    // Retorna true se e somente se a lista estiver vazia
    bool Vector::empty() const{
        if(m_list == nullptr) return true;
    } // O(1)

    // Retorna uma referencia para o elemento na posicao k.
    // A funcao verifica automaticamente se n esta dentro dos 
    // limites de elementos validos no vetor, lancando uma 
    // excecao 'out_of_range' se nao estiver.
    int& at(int k){
        if (k >= 0 && k < size() )
        {
            return m_list[k];
        }else
        throw out_of_range("erro: indice invalido");
        
    }
    const int& at(int k) const; // O(1)

    // Retorna uma referencia para o elemento na posicao k.
    // Essas funcoes nao verificam se o indice eh valido.
    int& Vector::operator[](int index){
        return m_list[index];
    } // O(1)
    const int& operator[](int index) const{

    } // O(1)

    // Solicita que a capacidade do vetor seja >= n.
    // Se n for maior que a capacidade atual do vetor, a 
    // funcao faz com que a lista aumente sua capacidade 
    // realocando os elementos para o novo vetor. Em todos 
    // os outros casos, a chamada da funcao nao causa uma
    // realocacao e a capacidade do vetor nao eh afetada.
    void reserve(int n); // O(n)
    
    // Recebe um inteiro como argumento e o adiciona
    // logo apos o ultimo elemento da lista. 
    void push_back(const int& value){
        if(m_size < m_capacity){
            m_list[m_size] = value;
            m_size++;
        }        
    } // tempo medio O(1)
    
    // Remove o ultimo elemento da lista se a lista nao
    // estiver vazia. Caso contrario, faz nada 
    void pop_back(); // O(1)
     
};
