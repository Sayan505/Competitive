// https://www.hackerrank.com/challenges/mini-max-sum/problem


#include<iostream>
#include<algorithm>

int main(int argc, char** argv) {
    std::ios_base::sync_with_stdio(false);

    long long _x[5], _smin, _smax;

    scanf("%lld %lld %lld %lld %lld", &_x[0], &_x[1], &_x[2], &_x[3], &_x[4]);

    std::sort(_x, _x + 5);

    _smin = _x[0] + _x[1] + _x[2] + _x[3];
    _smax = _x[4] + _x[3] + _x[2] + _x[1];

    std::cout << _smin << " " << _smax;

    return 0;
}