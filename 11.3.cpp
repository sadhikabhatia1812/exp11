#include<iostream>
using namespace std;
class cube{
    private:
    int height = 2;
    int width = 3;
    int length = 5;
public:
int volume(){
    int v;
     v=height*width*length;
    return v;
}};
int main(){
    cube cube1;
    int vol=cube1.volume();
    cout<< "Volume : "<<vol <<endl;
}

/*OUTPUT :
volume  30
*/
