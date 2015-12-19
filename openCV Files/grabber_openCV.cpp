#include "cv.h"
// #include "highhui.h"
#include <opencv2/highgui/highgui.hpp>
// #include "core.hpp"
// #include <iostream.h>
using namespace cv;
int main()
{
    Mat sudokuImage = imread("image.jpg",0);
    imshow("Title", sudokuImage);
    waitKey(0);
    // getch();
    return 0;
}
