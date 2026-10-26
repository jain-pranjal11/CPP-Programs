#include <iostream>
using namespace std;

class BankAccount{
    private:
        double bal;
        string acc_no;
    public:
        //valid but not preferred
        // BankAccount(){
        //     this->bal = 0;
        //     this->acc_no = "ACC2690";
        //     cout<<"Initial Balance: $"<<this->bal<<endl;
        //     cout<<"Account Number: "<<this->acc_no<<endl;
        // }

        // In C++, it's generally better to initialize data members using a member initializer list:
        BankAccount(): bal(0), acc_no("ACC2690"){
            cout<<"Initial Balance: $"<<this->bal<<endl;
            cout<<"Account Number: "<<this->acc_no<<endl;

        }

        BankAccount(double bal, string acc_no){
            this->bal = bal;
            cout<<"Initial balance: $"<<this->bal<<endl;
            this->acc_no = acc_no;
            cout<<"Account Number: "<<this->acc_no<<endl;
        }

        bool deposit(){
            double amt;
            cout<<"How much amount do you want to deposit? $";
            cin>>amt;

            if(amt < 0){
                cout<<"Please enter valid amount."<<endl;
                return false;
            }
            else{
                bal+=amt;
                cout<<"Deposit successful. New balance: $"<<bal<<endl;
                return true;
            }
        }

        bool withdraw(){
            double amt;
            cout<<"How much amount do you want to withdraw? $";
            cin>>amt;

            if(amt > 0 && amt <= bal){
                bal-=amt;
                cout<<"Withdrawal successful. New balance: $"<<bal<<endl;
                return true;
            }
            else if(amt < 0){
                cout<<"Withdrawal failed: Amount must be positive"<<endl;
                return false;
            }
            else{
                cout<<"Withdrawal failed: Insufficient balance"<<endl;
                return false;
            }
        }
};



int main() {
    
    // cout<<"Using Parameterized Constructor"<<endl;
    // BankAccount B1(500.0,"ACC9065");
    // B1.deposit();
    // B1.withdraw();

    // cout<<endl;
    
    cout<<"Using Non-Parameterized Constructor"<<endl;
    BankAccount B2;
    B2.deposit();
    B2.withdraw();

    return 0;
}