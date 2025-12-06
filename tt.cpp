#include <iostream>

class all {
    int val;
    public:
    all();
    all (const all& other);
    all& operator=( const all& other);
    ~all();
};

all::all()
{
    val = 0;
}
all::all(const all& other):val(other.val){}

all& all::operator=(const all& other){
    if (this != &other)
        this->val = other.val;
        return *this;
}

all::~all(){
    std::cout << "good bye"<< std::endl;
}