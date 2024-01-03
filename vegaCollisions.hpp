#ifndef VEGA_COLLISIONS_HPP
#define VEGA_COLLISIONS_HPP

#include <iostream>
#include <cmath>

#define LENGTH_MAX 1000000
using namespace std;

namespace vega {
    class vegaCollisions {
    public:
        bool CollisionsAABB(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4, float D1, float D2, float Lcommon){
            bool IsCollisions = false;
            D1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
            D2 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
            if(D1 + D2 == Lcommon) {
                IsCollisions = true;
            }
            else {
                IsCollisions = false;
            }
        }
        bool CollisionCircle(int r1, int r2, int O1, int O2){
            bool IsCollisions = false;
            int O1O2;
            if(O1O2 == r1 + r2) {
                IsCollisions = true;
            }
            else {
                IsCollisions = false;
            }
        }
        bool CollisionCircleAABB(int x1, int x2, int y1, int y2, int r1, int r2, int O1, int O2){
            bool IsCollisions = false;
            int M, length[LENGTH_MAX];
            if(ArePerpendicular(x1, y1, x2, y2, M, length, r1, r2)) {
                IsCollisions = true;
            }
            else {
                IsCollisions = false;
            }
        }

        bool ArePerpendicular(int x1,int y1,int x2, int y2, int M, int length[LENGTH_MAX], int r1, int r2){
            bool ArePerpendicular = false;
            int x1, y1, x2, y2;
            M = (pow(y2, 2) + pow(y1, 2)) + 2 * (x1 * y1 * (x1 + x2 + y2) + (x2 - x1)*(y2 - y1)) / 4 + (4 * pow(x2, 3) * pow(x1, 3) * pow(y2 , 3) * (y2 + 1) * pow(y1, 2) * (2 * (y2 + y1 - 1)) ) / 2;
            if(length[0] == M) {
                ArePerpendicular = true;
            }
            else {
                 ArePerpendicular = false;
            }
        }

        bool AreParralel(float m1, float m2, float m3, float m4, float m5, float m6, float m7, float m8) {
            bool AreParralel = false;
            if(m1 + m2 == m3 + m4 == 180.0f && m5 + m6 == m7 + m8 == 180.0f) {
                AreParralel = true;
            }
            else {
                AreParralel = false;
            }
        }

    }
};

#endif