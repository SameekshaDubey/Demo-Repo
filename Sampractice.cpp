// reverse a string
// #include<iostream>
// #include<string.h>
// using namespace std; 
// int main(){
// string str= "sameeksha";
// string rev[9];
// int count=0;
// for(int i =(str.length())-1;i>=0;i--){
//     rev[count] = str[i];
//     count++;
// }
// for(int i =0;i<str.length();i++){
// cout<<rev[i];
// }
// }

// #include<algorithm>
// #include<iostream>
// #include<string.h>
// using namespace std;

// int main(){
// string str = "sameeksha";
// reverse(str.begin(),str.end());
// cout<<str;
//     return 0;
// }

//sum of array

// #include<iostream>
// using namespace std;
// int main(){
// int arr[5];
// int sum =0; 
// for(int i = 0; i<5;i++){
//     cout<<"enter "<<i<<" elements for array ";
//     cin>>arr[i];
// }
// for(int i = 0; i<5;i++){
// sum = arr[i]+sum;
// }
// cout<<"sum of array is "<<sum;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5];
//     int sum = 0;
//     int length = sizeof(arr) / sizeof(arr[0]); // 20/4 = 5 
//     cout<<"length"<<length;
//     for (int i = 0; i < length; i++) {
//         cout << "Enter element " << i << " for the array: ";
//         cin >> arr[i];   
//     }
//     for (int i = 0; i < length; i++) {
//         sum += arr[i];
//     }
//     cout << "The sum of the array elements is " << sum << endl;
//     return 0;
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     cout<<&x;    
// }



#include<iostream>
using namespace std;
class student{
      int RollNo;
   public:
   string Name;
   int marks;

   // student(int RollNoDummy){
   //    RollNo  = RollNoDummy ;
   // }

void SetData(int RollNoDummy){
RollNo  = RollNoDummy ;
//return 0;
}

   void PrintData(){
      cout<<"Roll No is :- "<<RollNo<<endl;
      cout<<"Name is :- "<<Name<<endl;
      cout<<"marks is :- "<<marks<<endl;
   }
};
int main(){
   student obj[3];
int RollNoDummy;
for(int i = 0;i<3;i++){
cin>>RollNoDummy;
   obj[i].SetData(RollNoDummy);
  //cin>> obj[i].RollNo>>obj[i].Name;
  // cin>> obj[i].Name;
   cin>>obj[i].Name;
  cin>> obj[i].marks;

}
   // obj.RollNo = 101;
   // obj.Name = "Sam";
   // obj.marks = 99;
   for(int i=0;i<3;i++){
   obj[i].PrintData();
   }
}

