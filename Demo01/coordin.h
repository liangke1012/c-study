//
// Created by liangke on 2022/8/12.
//
#ifndef LIANGKEDEMO_COORDIN_H
#define LIANGKEDEMO_COORDIN_H
struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};
polar rect_to_polar(rect xypos);
void show_polar(polar polar);
#endif //LIANGKEDEMO_COORDIN_H
