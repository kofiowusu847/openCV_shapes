#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
int main()
{
    Mat image(1000,1000,CV_8UC3);
    ellipse( image, Point( 200, 200 ), Size( 100.0, 50.0 ), 180, 20, 360, Scalar( 255, 0, 0 ), -1, CV_AA );
    ellipse(image,Point(400,200),Size(50,100),45,10,360,Scalar(0,255,0),-1,CV_AA);
    imshow("",image);
    waitKey(0);
    return 0;
}
