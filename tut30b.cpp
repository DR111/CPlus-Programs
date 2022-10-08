#include<iostream>
using namespace std;

class Point{
    int x,y;
    friend void distance(Point , Point);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};

void distance(Point p1, Point p2){
    int d;
    d = ((p2.x- p1.x)^2 + (p2.y- p1.y)^2)^1/2;
    cout<<"The distance is "<<d<<endl;
}

int main(){
    Point p(0, 1);
    p.displayPoint();
    Point q(0, 6);
    q.displayPoint();

    distance(p,q);

    return 0;
}