#include <iostream>
#include <vector>

using namespace std;

template <class t>

class DataSourceInterface
{

public:
    virtual void addClient(t client) {
        cout<<client<<endl;
    };
    virtual void addEmployee(t employee) {
        cout<<employee<<endl;
    };
    virtual void addAdmin(t admin) {
        cout<<admin<<endl;
    }


    virtual void removeAllClients() = 0;
    virtual void removeAllEmployees() = 0;
    virtual void removeAllAdmins() = 0;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
