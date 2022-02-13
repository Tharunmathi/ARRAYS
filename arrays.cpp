/*#include <iostream>  
using namespace std;  
int main()  
{  
 int arr[5]={1,23,45,6,0};  //creating and initializing array    
        //traversing array 
        cout<<"enter the elements :";
        for (int i = 0; i < 5; i++)    
        {    
            cout<<arr[i]<<"\n";    
        }    
}  */
// PASSING ARRAYS TO FUNCTIONS
/* #include <iostream>  
using namespace std;  
void printArray(int arr[5]);  
int main()  
{  
        int arr1[5] = { 10, 20, 30, 40, 50 };    
        int arr2[5] = { 5, 15, 25, 35, 45 };    
        printArray(arr1); //passing array to function    
        printArray(arr2);  
}  
void printArray(int arr[5])  
{  
    cout << "Printing array elements:"<< endl;  
    for (int i = 0; i < 5; i++)  
    {  
                   cout<<arr[i]<<"\n";    
    }  
}  */
/*# include <iostream>
using namespace std;
void printmin(int arr[5]);
int main(){
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={90,80,70,60,50};
    printmin(arr1);
    printmin(arr2);
    return 0;
}
void printmin(int arr[5]){
     int min = arr[0];    
        for (int i = 0; i > 5; i++)    
        {    
            if (min > arr[i])    
            {    
                min = arr[i];    
            }    
        }    
        cout<< "Minimum element is: "<< min <<"\n";    
}  */
/*#include <iostream>
using namespace std;
void printmax(int arr[5]);
int main(){
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={90,80,70,60,50};
    printmax(arr1);
    printmax(arr2);
    return 0;
}
void printmax(int arr[5]){
     int max= arr[0];    
        for (int i = 0; i < 5; i++)    
        {    
            if (max < arr[i])    
            {    
                max = arr[i];    
            }    
        }    
        cout<< "Maximum element is: "<< max <<"\n";    

} */
/*#include <iostream>  
using namespace std;  
int main()  
{  
  int test[3][3];  //declaration of 2D array   
    test[0][0]=5;  //initialization   
    test[0][1]=10;   
    test[1][1]=15;  
    test[1][2]=20;  
    test[2][0]=30;  
    test[2][2]=10;  
    //traversal    
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<< test[i][j]<<" ";  
        }  
        cout<<"\n"; //new line at each row   
    }  
    return 0;  
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  for(int i = 0; i < 4; i++) {
    cout << i << ": " << cars[i] << "\n";
  }
  return 0;
}*/
//////////////////////////////////////"POINTERS"///////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;
int main(){
    int age=19;
    int *page=&age;
    string name="Tharun";
    string *pname=&name;
    double num=56.6;
    double *pnum=&num;
    cout<<"The address of age is:"<<&*&age<<endl;
    cout<<"The address of name is:"<<&name<<endl;
    cout<<"the address of num is:"<<&num<<endl; 
    cout<<"The pointer variable of age is:"<<*page<<endl;
    cout<<"The pointer variable of name is:"<<*pname<<endl;
    cout<<"The pointer variable of num is:"<<*pnum<<endl;
    return 0;
}*/
/////////////////////////////////////////"REFERENCES"/////////////////////////////////////
/*#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";
  return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Access the memory address of food and output its value
  cout << *ptr << "\n";
  
  // Change the value of the pointer
  *ptr = "Hamburger";
  
  // Output the new value of the pointer
  cout << *ptr << "\n";
  
  // Output the new value of the food variable
  cout << food << "\n";
  return 0;
}*/
#include <iostream>  
using namespace std;  
int main()  
{  
int a=20,b=10,*p1=&a,*p2=&b;    
cout<<"Before swap: *p1="<<*p1<<" *p2="<<*p2<<endl;    
*p1=*p1+*p2;    
*p2=*p1-*p2;    
*p1=*p1-*p2;    
cout<<"After swap: *p1="<<*p1<<" *p2="<<*p2<<endl;    
   return 0;  
}  