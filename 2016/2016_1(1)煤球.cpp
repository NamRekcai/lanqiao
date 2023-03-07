#include <iostream>
 
using namespace std;
int f[101];
int main()
{
    f[1] = 1;
    int sum = f[1];
    for (int i = 2; i <= 100; i++)
	{
        f[i] = f[i - 1] + i;
        sum += f[i];
    }
        
    cout << sum;
    return 0;
}

//#include <iostream>
// 
//using namespace std;
//
//int f[101];
//int main()
//{
//    f[1] = 1;
//    for (int i = 2; i <= 100; i++)
//        f[i] = f[i - 1] + i;
//    for (int i = 2; i <= 100; i++)
//        f[i] = f[i - 1] + f[i];
// 
//    cout << f[100];
//    return 0;
//}
