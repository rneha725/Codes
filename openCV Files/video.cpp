#include "opencv2/highgui/highgui.hpp"
#include <cv.h>
#include "iostream"

using namespace cv;
using namespace std;
int main()
{
    VideoCapture cap("/home/rneha725/Prem.mp4");
    if(!cap.isOpened())
    {
        cout<<"Video Error.\n";
        return -1;
    }
    cout<<cap.get(CV_CAP_PROP_FPS);
    namedWindow("PRDP", CV_WINDOW_AUTOSIZE);
    cap.set(CV_CAP_PROP_POS_MSEC,30000);
    while(1)
    {
        Mat frame;
        bool frameRead = cap.read(frame);
        if(!frameRead)
        {
            std::cout << "Sorry" << std::endl;
            return -1;
        }
        imshow("PRDP", frame);
        if(waitKey(15)==27)
        {
            std::cout << "break" << std::endl;
            break;
        }
        else if(waitKey(15)==32)
        {
            while(1){if(waitKey(30)==32) break;}
        }
    }
    return 0;
}
