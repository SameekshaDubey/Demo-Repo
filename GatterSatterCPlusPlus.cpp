#include<iostream> 
#include<string>
using namespace std;

class Teacher{
    private:
    double TSalary;
    public:
    string TName;
    string Tclass;
    string TDept;
//Setter -> is used to assign value to the private member of any class.
    void SetSalary(double s){
        TSalary = s;
    }
// Getter -> is used to get value of the private member of any class.
    int GetSalary(){
        return TSalary;
    }
};
int main(){
    // Teacher T1;
    // T1.TName = "Sam";
    // T1.Tclass = "fifth";
    // T1.TDept = "CS";
    // T1.SetSalary(25000);
    // cout<<"Tracher one data is:-"<<endl<<T1.TName<<endl <<T1.Tclass<<endl<<T1.TDept<<endl<<T1.GetSalary()<<endl;

    // Teacher T2;
    // T2.TName = "John";
    // T2.Tclass = "Sixth";
    // T2.TDept = "IT";
    // T2.SetSalary(55000);
    // cout<<"Tracher Two data is:-"<<endl<<T2.TName<<endl <<T2.Tclass<<endl<<T2.TDept<<endl<<T2.GetSalary()<<endl;
    // return 0;

    // Like this if you want to store teacher3------100 data so you have to create 100 obj apart from that you can create array of object.

    Teacher T[3];
    int s;
    for(int i=0;i<3;i++){
        cout<<"enter data for teacher "<<i << endl;
       cin>> T[i].TName >> T[i].Tclass>> T[i].TDept;
       cin>>s;
       T[i].SetSalary(s);
           cout<<"Tracher "<< i <<" data is:-"<<endl<<T[i].TName<<endl <<T[i].Tclass<<endl<<T[i].TDept<<endl<<T[i].GetSalary()<<endl;

    }

}