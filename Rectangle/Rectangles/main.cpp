#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using  namespace std;
using namespace cv;

int main()
{
    Mat image(1000,2000,CV_8UC4);

    rectangle(image,Point(100,100),Point(300,300),Scalar(0,0,255),3,CV_AA);
    rectangle(image,Point(400,100),Point(600,300),Scalar(0,255,0),1,CV_AA);
    /*Rectangle with a fill */
    rectangle(image,Point(600,600),Point(400,400),Scalar(255,0,0),-3,8);
    imshow("Welcome",image);
    waitKey(0);
    return 0;
}
