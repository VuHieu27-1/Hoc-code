#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
class Bank {
    private:
        long long tien;
    protected:
        vector<int> balance;
    public:
        Bank()
        {
            long long tien = 0;
        }
        Bank(vector<int> balance, long long tien)
        {
            this->balance = balance;
            this->tien = tien;
        }
        void setbank(vector<int> balance)
        {
            this->balance = balance;
        }
        vector<int> getbank()
        {
            return balance;
        }
        void settien(long long tien)
        {
            this->tien = tien;
        }
        long long gettien()
        {
            return tien;
        }
        bool transfer(int account1, int account2, long long money) {
            if(account1 < 0 || account2 < 0 || account1 > balance.size() || account2 > balance.size())
            {
                cout << "Tai khoan khong ton tai: " << endl;
                return false;
            }
            if(balance[account1 - 1] <= 0 || money > balance[account1 - 1]  )
            {
                cout << "Ngheo ma chuyen gi ?" << endl;
                return false;
            }
            balance[account1 - 1] -= money;
            balance[account2 - 1] += money;
            return true;
        }
        
        bool deposit(int account, long long money) {
            if(account < 0 || account > balance.size())
            {
                cout << "Tai khoan khong ton tai: " << endl;
                return false;
            }
            for (int i = 0; i < balance.size(); i++)
            {
                if(account - 1 != i)
                {
                    cout << "Khong co tai khoan ton tai. " << endl;
                    return false;
                }
            }
            balance[account - 1] += money;
            return true;
        }
        
        bool withdraw(int account, long long money) {
            if(account < 0 || account > balance.size())
            {
                cout << "Tai khoan khong ton tai: " << endl;
                return false;
            }
            for (int i = 0; i < balance.size(); i++)
            {
                if(account - 1 != i)
                {
                    cout << "Khong co tai khoan ton tai. " << endl;
                    return false;
                }
                if(money > balance[i])
                {
                    cout << "Tai khoan khong du tien. " << endl;
                    return false;
                }
            }
            if(balance[account - 1] < 0 )
            {
                cout << "HET TIEN ROI" << endl;
                return false;
            }
            balance[account - 1] -= money;
            return true;
        }
        void nhaptien()
        {
            cin >> tien;
            balance.push_back(tien);
        }
        void in()
        {
            for (int i = 0; i < balance.size(); i++)
            {
                cout << "Tai khoan " << i + 1 << ": " << balance[i] << " ";
            }
            cout << endl;
        }
};