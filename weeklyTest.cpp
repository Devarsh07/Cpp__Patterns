#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++){
        if(i==3){
            break;//continue
        }
        cout<<i<<" ";
    }
    return 0;
}


// #include<iostream>
// using namespace std;
// int main ()
// {
//     int point;
//     cin>>point;
//     if(30<=point<=50)
//     {
//         cout<<"Average";
//     }
//     else if(51<=point<=60)
//     {
//         cout<<"Good";
//     }
//     else if(61<=point<=80)
//     {
//         cout<<"Excellent";
//     }
//     else{
//         cout<<"Outstanding";
//     }
//     return 0;
// }


// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     int number;
    
//     cout << "Enter a number: ";
//     cin >> number;
    
//     double cubeRoot = cbrt(number);
//     cout<<cubeRoot;
    
//     if (cubeRoot == int(cubeRoot)) {
//         cout << number << " is a perfect cube." << endl;
//     } else {
//         cout << number << " is not a perfect cube." << endl;
//     }
    
//     return 0;
// }




// #include <iostream>
// #include <string>
// #include <list>
// using namespace std;
// int main () 
// {
//     int num,n,result,count=0,k;
//     cin>>num;
//     int arr[num];
//     for(int n=0;n<num;n++)
//     {
//         cin>>arr[n];
//     }
//     int test=1;
//     while(test<=9)
//     {
//         for(int i=0;i<9;i++)
//         {
//             if(test*test*test==arr[i])
//             {
//                 result==test;
//                 count=count+1;
//             }
           
//             else{
//                  k==7;
//             }
//         }
        
//         test=test+1;
//     }
//     cout<<count;
    
//     return 0;
// }