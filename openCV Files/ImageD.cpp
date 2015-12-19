#include "opencv2/core/core_c.h"
#include "opencv2/core/core.hpp"
#include "opencv2/flann/miniflann.hpp"
#include "opencv2/imgproc/imgproc_c.h"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/video/video.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/ml/ml.hpp"
#include "opencv2/highgui/highgui_c.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/contrib/contrib.hpp"
#include <iostream>
#include <cv.h>
#include <cvaux.h>
#include <highgui.h>
using namespace cv;
using namespace std;

int main(int argc, char const *argv[])
{
  Mat image=imread("~/Desktop/image.png");
  cout<<"Columns: "<<image.cols<<"\n";
  cout<<"Rows: "<<image.rows<<"\n";
  cout<<"Type: "<<image.type();
  namedWindow("Sample");
  imshow("Sample", image);
  // wait(0);
  // getch();
  return 0;
}
