#include<iostream>
using namespace std;

class Info{
    protected:
    string Atm_Card = "7410-8525-9638";

    friend class f;
};

class f{
    public:

    void showMe(Info &st){
        string cardNo = st.Atm_Card;
        cout << "Your Card No is Private, but you can access " << cardNo << endl;
    }
};

int main(){
    Info st;
    f fri;
    fri.showMe(st);
    
}