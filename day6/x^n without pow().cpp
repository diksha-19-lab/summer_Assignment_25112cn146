#include<iostraem>
using namespace std;
int main()
{
    int x,n,result = 1;
    cin>> x>> n;
    for(int i = 1; i<=n; i++)
    {
        result *=x;
    }
    cout << result;
    return 0;
}
    
